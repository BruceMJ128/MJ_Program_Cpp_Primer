#ifndef ConstStrBlobPtr_h
#define ConstStrBlobPtr_h

#include <memory>
#include <vector>
#include <string>
#include <initializer_list> //���пɱ��βεĺ������÷�������vector 
#include <exception>  //exception ͷ�ļ�������������쳣��

using namespace std;
using size_type = vector<string>::size_type;  //��Ч��typedef std::vector<std::string>::size_type size_type;

class ConstStrBlobPtr;

class StrBlob
{
	
	public:
		friend class ConstStrBlobPtr;
		
		ConstStrBlobPtr begin() const;  
		ConstStrBlobPtr end() const;	
		
		std::string front();
		std::string back();
		
		size_type size() const { return data->size(); }  //������vector<string>.size()
		bool empty() const { return data->empty(); }	//������vector<string>.empty()
		
		void push_back(const std::string &t) {data->push_back(t);}  // ��Ӻ�Ԫ��
		void pop_back();  //��ʼ�� check, ɾ�����һλԪ�� 
		
		StrBlob(); //������ʼ�� 
		StrBlob(): data(make_shared<vector<string>>()) { } //����::����: ��ֵ 
		StrBlob(initializer_list<string> il): data(make_shared<vector<string>> (il)) { }  // ��ʼ�� 
		
	private:
		std::shared_ptr<std::vector<std::string>> data;		
		// ���data[i]���Ϸ����׳�һ���쳣
		void check(size_type i, const std::string &msg) const;
};


void StrBlob::check(size_type i, const string &msg) const
{
	if (i >= data->size())
	   throw out_of_range(msg);  //���� 
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

string StrBlob::front()
{
	// ���vectorΪ�գ�check���׳�һ���쳣
	check(0, "front on empty StrBlob");
	return data->front();
}
string StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

//*************************//

//*************************//

class ConstStrBlobPtr
{
	public:
		ConstStrBlobPtr():curr(0) {	}  //��ʼ�� 
		//StrBlobPtr(StrBlob &a, size_t sz): wptr(a.data), curr(sz){ } //��ʼ��
		//StrBlobPtr(StrBlob &a): wptr(a.data), curr(0) {	}
		
		ConstStrBlobPtr(const StrBlob &a, size_t sz=0): wptr(a.data), curr(sz){ } //��ʼ��
		
		bool operator!=(const ConstStrBlobPtr& p) { return p.curr != curr; }
			
		const string & deref() const;  //����vector�е�Ԫ�� 
		ConstStrBlobPtr & incr();  //ָ����� 
	private:
		shared_ptr<vector<string>> check(size_t,const std::string&) const;
		weak_ptr<vector<string>> wptr;
		size_t curr;
};

shared_ptr<vector<string>> ConstStrBlobPtr::check(size_t i, const string &msg) const
{
	auto ret = wptr.lock();
	if(!ret)
	{
		throw runtime_error("unbound StrBlobPtr");
	}
	if(i>=ret->size())
	{
		throw std::out_of_range(msg);
	}
	return ret;
}

const string & ConstStrBlobPtr::deref() const
{
	auto p=check(curr, "dereference past end");
	return (*p)[curr];
}

ConstStrBlobPtr& ConstStrBlobPtr::incr()  //ָ����� 
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}

//*************************//


//*************************//
ConstStrBlobPtr StrBlob::begin() const
{
	return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr StrBlob::end() const
{
	auto ret = ConstStrBlobPtr(*this, data->size());
	return ret;
}
#endif
