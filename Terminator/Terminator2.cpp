#include<iostream>
using namespace std;

class TRY{
	public :
		int a,b;
	public :
		void setD(int a,int b){
				try{
			if(b==0)
			{
				throw b;	
			}
			else {
				cout << "answer : " << a/b;
			}
		}
			catch(int c)
				{
					cout << "can not divied " << c << endl;
				}
				catch(char d)
				{
					cout << "can not divied " << d << endl;
				}
				catch(...)
				{
					cout << "Special character " << endl;
				}
			}
};

int main()
{
	int a,b;
	
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	
	TRY t;
	t.setD(a,b);
}
