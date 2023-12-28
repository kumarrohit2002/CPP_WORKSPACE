#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int digit=0;
	while(n>0){
		digit=digit+1;
		n=n/10;
	}
	cout<<digit;
	return 0;
}
