#include<iostream>
using namespace std;
class sum{
	protected :
		int a,b;
		public :
			void input(){
				cout<<"Enter A = ";
				cin>>a;
			}
};
class total : public sum
{
	public :
	void input2()
	{
		cout<<"Enter B = ";
		cin>>b;
		cout<<"A + B = "<<a+b;
	}
};
main()
{
	total t;
	t.input();
	t.input2();
}
