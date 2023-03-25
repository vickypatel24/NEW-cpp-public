#include<iostream>
using namespace std;

class A{
	public:
		virtual void setD(){
			cout<<"This is class A ...";
		}
};
class B{
	public:
		void setD(){
			cout<<"This is class B ...";
		}
};
main()
{
	B b;
	b.setD();
}
