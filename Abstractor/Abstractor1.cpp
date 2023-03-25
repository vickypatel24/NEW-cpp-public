#include<iostream>
using namespace std;

class A {
	public :
		virtual void getD()=0;
			
		void disp(){
		cout<<"This is class A ......"<<endl;
		}
};
class B : public A
{
	public :
		void getD(){
		cout<<"This is class B ......";
		}
};
main()
{
	B b;
	b.disp();
	b.getD();
}
