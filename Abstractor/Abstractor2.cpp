#include<iostream>
using namespace std;

class stu{
	protected :
		string name;
		int age;
		int std;
		public :
			void getD(){
				cout<<"Enter Name :  ";
				cin>>name;
				cout<<"Enter Age :  ";
				cin>>age;
				cout<<"Enter Standard :  ";
				cin>>std;
			}
};
class display1 : public stu
{
	public :
	void set1(){
		cout<<"Student Name is       :"<<name<<endl;
	}
};
class display2 : public display1
{
	public :
		void set2(){
			cout<<"Student Age is      :"<<age<<endl;
			cout<<"Student Standard is :"<<std;
		}
};
main()
{
	display2 d;
	d.getD();
	d.set1();
	d.set2();
}
