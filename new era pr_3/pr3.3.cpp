#include<iostream>
using namespace std;

class sum{
	int c,sec,min=0,hour=0;
	public :
	void input(){
		cout<<"enter second :" ;
		cin>>c;
	}
	void output(){
		while(c>=60)
		{
			c=c-60;
			min++;
		}
		while(min>=60)
		{
			min=min-60;
			hour++;
		}		
		cout<<hour<<" hour "<<min<<" min "<<c<<" second ";
	
	}
};
main()
{
	sum s;
	s.input();
	s.output();
}

















