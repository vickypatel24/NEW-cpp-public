#include<iostream>
using namespace std;

class msg {
	private :
		string MSG;
		string a;
		public :
			msg(){
				cout<<"Enter Another Your Name : ";
				cin>>MSG;
			}
			void input(string a){
				this->a=a;
			}
			void print(){
				cout<<"Name    is    : "<<a<<endl;
				cout<<"Other Name is : "<<MSG;
			}
};
main()
{
	string name;
	cout<<"Enter Your Name : ";
	cin>>name;
	msg m;
	m.input(name);
	m.print();
}
