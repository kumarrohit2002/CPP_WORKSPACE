#include<stdio.h>
int main(){
	int n;
	int r=0;
	int d;
	scanf("%d",&n);
	while(n!=0){
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	printf("%d",r);
	return 0;
}
