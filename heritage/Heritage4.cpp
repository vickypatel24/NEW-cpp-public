#include<iostream>
using namespace std;

class A{
	protected :
		string name;
		string city;
		public :
			void a1(){
				cout<<"Enter Employee Name : ";
				cin>>name;
				cout<<"Enter Employee City : ";
				cin>>city;
			}
};
class B{
	protected :
		int age,exp;
		public :
		void b1(){
			cout<<"Enter Employee Age : ";
			cin>>age;
			cout<<"Enter Employee Experience : ";
			cin>>exp;
			cout<<".............................."<<endl;
		}
};
class employee : public A , public B
{
	public :
	void outPut(){
		cout<<"Employee Name Is       : "<<name<<endl;
		cout<<"Employee Age Is        : "<<age<<endl;
		cout<<"Employee City Is       : "<<city<<endl;
		cout<<"Employee Experiance Is : "<<exp<<endl;
		cout<<".............................."<<endl;
	}
};
main()
{
	employee e;
	e.a1();
	e.b1();
	e.outPut();
}
