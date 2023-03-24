#include<iostream>
using namespace std;

class A{
	public:
		setD(int a){
			cout<<"A = "<<a<<endl;
			cout<<"......................."<<endl;
		}
		setD(int a,int b){
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
			cout<<"......................."<<endl;
		}
		setD(int a,int b,int c){
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
			cout<<"C = "<<c<<endl;	
			cout<<"......................."<<endl;
		}
			setD(int a,int b,int c,int d){
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
			cout<<"C = "<<c<<endl;
			cout<<"D = "<<d<<endl;	
			cout<<"......................."<<endl;
		}
		
};
main()
{
	A a;
	a.setD(0);
	a.setD(0,1);
	a.setD(0,1,2);
	a.setD(0,1,2,3);
}
