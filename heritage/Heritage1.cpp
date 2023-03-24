#include<iostream>
using namespace std;
class shape{
	protected :
		int width,height;
		public :
		shape(){
			cout<<"Enter Width : ";
			cin>>width;
			cout<<"Enter Height : ";
			cin>>height;
			
		}
};

class triangle : public shape
 {
	public :
		void trianglearea(){
			cout<<"Area of Triangle is : "<<width*height/2<<endl;
		}
};
class ractangle : public shape
 {
	public :
		void ractanglearea(){
			cout<<"Area of Triangle is : "<<width*height<<endl;
		}
};
main()
{
		triangle t;
		t.trianglearea();
		ractangle r;
		r.ractanglearea();
}
