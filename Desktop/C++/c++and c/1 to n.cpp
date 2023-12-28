#include<stdio.h>
int fun(int n){
	if(n==0) return n;
//	printf("%d ",n);
	fun(n-1);
	printf("%d ",n);
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	fun(n);
	return 0;
}
