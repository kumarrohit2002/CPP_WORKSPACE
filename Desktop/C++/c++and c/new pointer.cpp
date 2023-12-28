#include<iostream>
using namespace std;
int main(){
	int *p=NULL;
	p=new int;
	*p=23;
	cout<<*p<<endl;
	delete p;
	cout<<*p;
	return 0;
}
