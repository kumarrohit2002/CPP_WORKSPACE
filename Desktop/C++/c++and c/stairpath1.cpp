#include<stdio.h>
int way(int n){
	if(n<=3) return n;
	return way(n-1)+way(n-2)+way(n-3);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=way(n);
	printf("%d",a);
	return 0;
}
