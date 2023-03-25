#include<iostream>
using namespace std;

class shape{
	public:
		virtual void getArea()=0;
};
class circle : public shape
{
	public : 
	void carea(){
		cout<<"This Is Circle ..."<<endl;
	}
};
class triangle : public circle{
	public : 
	void tarea(){
		cout<<"This Is Triangle ..."<<endl;
	}
	void getArea(){
		cout<<"This is Shape Method"<<endl;
	}
};
main()
{
	triangle t;
	t.getArea();
	t.carea();
	t.tarea();
}
