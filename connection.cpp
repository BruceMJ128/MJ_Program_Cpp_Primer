#include <memory>
#include <new>
#include <iostream>
#include <string>

using namespace std;

	struct destination
	{
		string s_des;
		int i_des;		
		destination(string s, int i): s_des(s),i_des(i) {	};
	};
	struct connection
	{
		string s_con;
		int i_con;		
		connection(string s, int i): s_con(s),i_con(i) {	};
	};
	
	connection connect(destination* p_des)
	{
		shared_ptr<connection> p_con(new connection(p_des->s_des, p_des->i_des));
		cout<<"connection use_count: "<<p_con.use_count()<<endl;
		return *p_con;
	}
	
	void disconnect(connection con)
	{
		cout<<"close connection: "<<con.s_con<<" , "<<con.i_con<<endl;
	}
	
	void end_connection(connection *p_con) 
	{
		disconnect(*p_con);		
	} 
	
	void f(destination &d )
	{
		connection c = connect( &d);
		shared_ptr<connection> p(&c, end_connection); //使用 shared_ptr，传递一个指向删除器函数的参数
		cout<<"connecting now: "<<p.use_count()<<endl;
	}
	
int main()
{	
	destination des{"202.192.222.1", 2016};
	f(des);
	return 0;
}
