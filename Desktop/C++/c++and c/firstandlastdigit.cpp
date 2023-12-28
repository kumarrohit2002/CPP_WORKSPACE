#include<stdio.h>
int main(){
	int n,a,r;
	scanf("%d",&n);
	a=n%10;               //last digit
	for(int i=1;i<=n;i++){
		n=n/10;           //first digit
		r=n%10;
	}
	printf("%d %d",r,a);
	return 0;
}
