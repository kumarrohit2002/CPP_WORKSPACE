#include<iostream>
using namespace std;
void swap(int *p,int *q){
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;	
}

int main(){
	int a=10;
	int b=20;
	int *p=&a;
	int *q=&b;
	swap(*p,*q);
	cout<<" a = "<<a<<endl;
	cout<<" b = "<<b<<endl;
	return 0;
}
