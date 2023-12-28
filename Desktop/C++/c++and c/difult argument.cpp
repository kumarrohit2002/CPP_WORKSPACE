#include<iostream>
using namespace std;
class shape{
	public:
		float r;
		int a;
		int l;
		int b;
		void area(float r);
		void area(int a);
		void area(int l,int b);
}s;
void shape::area(float r){
	cout<<3.1415*s.r*s.r;
}
void shape::area(int a){
	cout<<a*a;
}
void shape::area(int l,int b){
	cout<<2*l*b;
}
int main(){
	cout<<"Enter the radius: ";
	cin>>s.r;
	s.area(s.r);
	cout<<endl;
	cout<<"enter the a: ";
	cin>>s.a;
	s.area(s.a);
	cout<<endl;
	cout<<"enter the l , b: ";
	cin>>s.l>>s.b;
	s.area(s.l,s.b);
	cout<<endl;
	
}
