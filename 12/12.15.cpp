#include <memory>
#include <string>
#include <iostream>

using namespace std;

struct connection
{
	string s_con;
	int i_con;
	connection(string s, int i):s_con(s),i_con(i){	}
};

struct destination
{
	string s_des;
	int i_des;
	destination(string s, int i):s_des(s),i_des(i) {	}
};

connection connect(destination* p_des)
{
	shared_ptr<connection> p(new connection(p_des->s_des,p_des->i_des));
	cout<<"connectiong built: "<<p.use_count()<<endl;
	return *p;
}

void disconnect(connection c)
{
	cout<<"connection break: "<<c.s_con<<" , "<<c.i_con<<endl;
}

void f(destination &d)
{
	connection c=connect(&d);
	shared_ptr<connection> p(&c, [](connection *p){ disconnect( *p);});
	cout<<"connecting: "<<p.use_count()<<endl;
}

int main()
{
	destination d{"202.198.101.1", 1988};
	f(d);
	return 0;
}
