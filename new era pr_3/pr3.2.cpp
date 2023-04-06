#include<iostream>
using namespace std;

class sum {
	int hour1,hour2,min1,min2,a,b;
	public :
	void input(){
	cout<<"enter hour :";
	cin>>hour1;
	cout<<"enter min :";
	cin>>min1;
	cout<<"enter hour :";
	cin>>hour2;
	cout<<"enter min :";
	cin>>min2;
	}
	void output(){
		int a,b;
		
			if(min1>60){
			min1=min1-60;
			hour1=hour1+1;
			}
			cout<<hour1<<"hour and "<<min1<<" min "<<endl;
	
			if(min2>60){
			min2=min2-60;
			hour2=hour2+1;
			
		}
			cout<<hour2<<"hour and "<<min2<<" min "<<endl;
		
			a = hour1+hour2;
			b = min1+min2;
			if(b>60){
			b=b-60;
			a=a+1;
			cout<<"total is "<<a<<" hour and "<<b<<" min "<<endl;
		}
		
		
		
	}
};

main(){

	sum s;
	s.input();
	s.output();
}
