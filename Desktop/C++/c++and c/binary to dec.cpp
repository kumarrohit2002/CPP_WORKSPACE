#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;                            // 100 worng hai
	int p=1,dec=0;
	while(n!=0){
		int l=n%10;
		dec=dec+(l*p);
		p+=2;
		n=n/10;
	}
	cout<<dec;
	return 0;
}
