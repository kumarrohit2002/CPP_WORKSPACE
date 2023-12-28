#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a;
	cout<<"Enter the input: ";
	cin>>a;
	int c=0;
	int dec=0;
	while(a!=0){
		int temp=a%10;
		dec=dec+(pow(2,c))*temp;
		c++;
		a=a/10;
	}
	cout<<dec;
	return 0;
}
