#include<iostream>
using namespace std;

int fibo(int n){
	if(n==1 || n==0) return 0;         // 0 1 1 2 3 5 8
	if(n==2) return 1;
	return fibo(n-1)+fibo(n-2);
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<fibo(i)<<" ";
	}
	
	return 0;
}
