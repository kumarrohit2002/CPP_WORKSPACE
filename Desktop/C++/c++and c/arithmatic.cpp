#include<iostream>
using namespace std;
class arith{
	private:
		int x;
		int y;
	public:
		void get(){
			cout<<"Enter the x: ";
			cin>>x;
			cout<<"Enter the y: ";
			cin>>y;
		}
		void sum(){
			cout<<x+y<<endl;
		};
		void diff();
		void multi();
		void put();
}a;

void arith::diff(){
	cout<<x-y<<endl;
}
void arith::multi(){
	cout<<x*y<<endl;
}
void arith::put(){
	sum();
	diff();
	multi();
}

int main(){
	a.get();
	a.put();
	return 0;
	
}
