#include<stdio.h>
int way(int n){
	if(n<=2) return n;
	return way(n-1)+way(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=way(n);
	printf("%d",a);
	return 0;
}
