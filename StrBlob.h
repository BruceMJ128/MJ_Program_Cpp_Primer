#ifndef StrBlob_h
#define StrBlob_h

#include <memory>
#include <vector>
#include <string>
#include <initializer_list> //���пɱ��βεĺ������÷�������vector 
#include <exception>  //exception ͷ�ļ�������������쳣�� 

using namespace std;
using size_type = vector<string>::size_type;  //��Ч��typedef std::vector<std::string>::size_type size_type;

class StrBlobPtr;

class StrBlob
{
	
	public:
		friend class StrBlobPtr;
		
		StrBlobPtr begin();  
		StrBlobPtr end();	
		
		std::string front();
		std::string back();
		
		size_type size() const { return data->size(); }  //������vector<string>.size()
		bool empty() const { return data->empty(); }	//������vector<string>.empty()
		
		void push_back(const std::string &t) {data->push_back(t);}  // ��Ӻ�Ԫ��
		void pop_back();  //��ʼ�� check, ɾ�����һλԪ�� 
		
		StrBlob ();
		StrBlob(std::initializer_list<std::string> il);
		
	private:
		std::shared_ptr<std::vector<std::string>> data;		
		// ���data[i]���Ϸ����׳�һ���쳣
		void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) { } //����::����: ��ֵ 
StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>> (il)) { }

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

class StrBlobPtr
{
	public:
		StrBlobPtr():curr(0) {	}  //��ʼ�� 
		//StrBlobPtr(StrBlob &a, size_t sz): wptr(a.data), curr(sz){ } //��ʼ��
		//StrBlobPtr(StrBlob &a): wptr(a.data), curr(0) {	}
		
		StrBlobPtr(StrBlob &a, size_t sz=0): wptr(a.data), curr(sz){ } //��ʼ��
		bool operator!=(const StrBlobPtr &p) { return p.curr!=curr;	}
					
		string & deref() const;  //����vector�е�Ԫ�� 
		StrBlobPtr & incr();  //ָ����� 
				
	private:
		shared_ptr<vector<string>> check(size_t,const std::string&) const;
		weak_ptr<vector<string>> wptr;
		size_t curr;
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const
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

string & StrBlobPtr::deref() const
{
	auto p=check(curr, "dereference past end");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()  //ָ����� 
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}

//*************************//
StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

#endif
