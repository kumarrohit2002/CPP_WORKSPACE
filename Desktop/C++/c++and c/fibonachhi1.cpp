#include<stdio.h>
int fibo(int n){
	if(n==1) return 0;
	else if(n==2) return 1;
	else return fibo(n-1)+fibo(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d\n",fibo(i));
	}
	return 0;
}
//int fibo(int n){
//	if(x==1) return 0;
//	else if(x==2) return 1;
//	else return fibo(x-1) fibo(x-2);
//}
