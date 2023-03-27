#include<iostream>
using namespace std;
main()
{
	int n=20;
	int i;
	int r=0;
	string p;
	string a;
	cout<<"Enter Password : ";
	cin>>p;
	try{
		for(i=0;i<n;i++){
			if(p[i]>=65 && p[i]<=90){
				r++;
				}
			}
			if(r>0){
				cout<<"your password is right...";
				
			}
			else{
				throw p;
			}
	}
	catch(string a){
		cout<<"plzzz..... 	Enter valid password......";
	}
}
