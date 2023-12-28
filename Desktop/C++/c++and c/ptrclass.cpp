#include<iostream>
using namespace std;
class book{
	int x;
	public:
		void get(){
			cout<<"enter the number: ";
			cin>>x;
			cout<<endl<<x;
		}
};
int main(){
	book obj;
	book *ptr;
	ptr=&obj;
	(*ptr).get();
	ptr->get();
	return 0;
}
