#include<stdio.h>
int facto(int n);
int main(){
	int n;
	int fact;
	scanf("%d",&n);
	fact=facto(n);
	printf("%d",fact);
	return 0;
}
int facto(int n){
	if(n<=0) return 1;
	else return n*facto(n-1);
}
