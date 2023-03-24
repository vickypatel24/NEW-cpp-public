#include<iostream>
using namespace std;
class animal{
	protected :
	string name;
	int age;
	public :
	void set(){
		cout<<"Enter the name of animal : ";
		cin>>name;
		cout<<"Enter the age of animal : ";
		cin>>age;
		cout<<".............................."<<endl;
	}
};
class zebra : public animal
{
	public :
	void outz(){
		cout<<"The name of animal is :"<<name<<endl;
		cout<<"The age of "<<name<<" is "<<age<<endl;
		cout<<".............................."<<endl;
	}
};
class dolphin : public animal
{
	public :
	void outd(){
		cout<<"The name of animal is :"<<name<<endl;
		cout<<"The age of "<<name<<" is "<<age<<endl;
		cout<<".............................."<<endl;
	}
};
main()
{
	zebra z;
	z.set();
	z.outz();
	dolphin d;
	d.set();
	d.outd();
}
