#include<iostream>
using namespace std;

class A{
	protected:
		int id;
		string name,role,salary,ex,c_name,add,email,contact;
	public :
		void setA()
		{
			cout << "Enter ID : ";
			cin >> id;	
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter role : ";
			cin >> role;
			cout<<".............................."<<endl;
		}
};
class B : public A{
	public :
		void setB()
		{
			
			cout << "Enter salary : ";
			cin >> salary;
			cout << "Enter exp : ";
			cin >> ex;
			cout<<".............................."<<endl;
		}
}; 
class C : public B{
	public :
		void setc()
		{
			
			cout << "Enter com name : ";
			cin >>c_name ;
			cout << "Enter add : ";
			cin >> add;
			cout<<".............................."<<endl;
		}
		void getc()
		{
			cout << "Name :" << name << endl
				 << "role :" << role << endl
				 << "Salary: " << salary << endl;
				 cout<<".............................."<<endl;
		}
		
};
class D : public C {
	public :
		void setD()
		{
			
			cout << "Enter email: ";
			cin >> email;
			cout << "Enter contact : ";
			cin >> contact;
			cout<<".............................."<<endl;
		}
		void getD()
		{
			cout << "ID : " << id << endl
				 << "Name :" << name << endl
				 << "role :" << role << endl
				 << "Salary: " << salary << endl
				 << "Ex :" << ex << endl
				 << "com name " << c_name << endl
				 << "Add : " << add << endl
				 << "Email :" << email << endl
				 << "Contact : " << contact << endl;
				 cout<<".............................."<<endl;
		}
};

int main()
{
	D a;
	a.setA();
	a.setB();
	a.setc();
	a.getc();
	a.setD();
	a.getD();
}
