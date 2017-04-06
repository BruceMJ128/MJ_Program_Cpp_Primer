#ifndef StrBlob_h
#define StrBlob_h

#include <memory>
#include <vector>
#include <string>
#include <initializer_list> //含有可变形参的函数，用法类似于vector 
#include <exception>  //exception 头文件定义了最常见的异常类 

using namespace std;
using size_type = vector<string>::size_type;  //等效于typedef std::vector<std::string>::size_type size_type;

class StrBlobPtr;

class StrBlob
{
	
	public:
		friend class StrBlobPtr;
		
		StrBlobPtr begin();  
		StrBlobPtr end();	
		
		std::string front();
		std::string back();
		
		size_type size() const { return data->size(); }  //类似于vector<string>.size()
		bool empty() const { return data->empty(); }	//类似于vector<string>.empty()
		
		void push_back(const std::string &t) {data->push_back(t);}  // 添加和元素
		void pop_back();  //初始化 check, 删除最后一位元素 
		
		StrBlob ();
		StrBlob(std::initializer_list<std::string> il);
		
	private:
		std::shared_ptr<std::vector<std::string>> data;		
		// 如果data[i]不合法，抛出一个异常
		void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) { } //函数::变量: 赋值 
StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>> (il)) { }

void StrBlob::check(size_type i, const string &msg) const
{
	if (i >= data->size())
	   throw out_of_range(msg);  //报错 
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

string StrBlob::front()
{
	// 如果vector为空，check会抛出一个异常
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
		StrBlobPtr():curr(0) {	}  //初始化 
		//StrBlobPtr(StrBlob &a, size_t sz): wptr(a.data), curr(sz){ } //初始化
		//StrBlobPtr(StrBlob &a): wptr(a.data), curr(0) {	}
		
		StrBlobPtr(StrBlob &a, size_t sz=0): wptr(a.data), curr(sz){ } //初始化
		bool operator!=(const StrBlobPtr &p) { return p.curr!=curr;	}
					
		string & deref() const;  //返回vector中的元素 
		StrBlobPtr & incr();  //指针递增 
				
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

StrBlobPtr& StrBlobPtr::incr()  //指针递增 
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
