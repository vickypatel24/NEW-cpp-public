#include<iostream>
using namespace std;
main()
{
	int a,b,i;
	cout<<"Enter A :";
	cin>>a;
	cout<<"Enter B :";
	cin>>b;
	try{
		if(b!=0){
			cout<<a<<" / "<<b<<" = "<<a/b;
		}
		else{
			throw b ;
		}
	}
	catch(int i){
		cout<<"a number cannot be divide by zero";
	}
}
