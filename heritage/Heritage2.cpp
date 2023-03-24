#include<iostream>
using namespace std;
class mother{           //ok//
	string namem;
	int agem;
	public :
		mother(){
			cout<<"Enter The Name Of Mother : ";
			cin>>namem;
			cout<<"Enter The Age Of Mother : ";
			cin>>agem;
			cout<<"............................."<<endl;
			
		}
		void display(){
			cout<<"Mother Name Is : "<<namem<<endl;
			cout<<"Mother Age Is  : "<<agem<<endl;
			cout<<"............................."<<endl;
		}
};
class daughter : public mother
{
	string named;
	int aged;	
		public :
			daughter(){
			cout<<"Enter The Name Of Daughter : ";
			cin>>named;
			cout<<"Enter The Age Of Daughter : ";
			cin>>aged;
			cout<<"............................."<<endl;
			}
		void display(){
			cout<<"Daughter Name Is : "<<named<<endl;
			cout<<"Daughter Age Is  : "<<aged<<endl;
			cout<<"............................."<<endl;
		}
};
main()
{
	daughter d;
	d. mother :: display();
	d. daughter ::display();
}