#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	try{
		if(b==0)
		{
			throw b;	
		}
		else {
			cout << "ANS : " << a/b;
		}
	}

	catch(...)
	{
		cout << "Special character ";
	}
}
