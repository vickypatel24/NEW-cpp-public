#include<iostream>
using namespace std;
class A{
	protected:
		int a,b;
		public :
			void setA(){
				cout<<"Enter a : ";
				cin>>a;
				cout<<"Enter b : ";
				cin>>b;
			}
			
};
class B : public A
{
	public :
		void setB(int x , int y){
			a = x;
			b = y;
		}
		void getB()
		{
			cout<<"A + B is = "<<a+b;
		}
};
main()
{
	int x,y;
	cout<<"Enter x : ";
	cin>>x;
	cout<<"Enter y : ";
	cin>>y;
	B b;
	b.setA();
	b.setB(x,y);
	b.getB();
}
