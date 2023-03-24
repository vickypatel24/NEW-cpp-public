#include<iostream>
using namespace std;

class num{
	protected :
		int a;
	public :
		num()
		{
			cout << "Enter A : ";
			cin >> a;
			cout<<".............................."<<endl;
		}
};

class square  : public num{
	public :
		void getsquare()
		{
			cout << "A : " << a*a<<endl;
			cout<<".............................."<<endl;
		}
};
class cube  : public num{
	public :
		void getcube()
		{
			cout << "A : " << a*a*a<<endl;
			cout<<".............................."<<endl;
		}
};

int main()
{
	cube c;
	c.getcube();
	cout << endl;
	square s;
	s.getsquare();
}
