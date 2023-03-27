#include<iostream>
using namespace std;
main()
{
	int age,a;
	cout<<"Enter Your Age : ";
	cin>>age;
	try{
		if(age>=18){
			cout<<"You Are Able For Vote .....";
		}
		else{
			throw age;
		}
	}
	catch(int a){
		cout<<"a person cannot be able to vote bcoz age is less then 18";
	}
}
