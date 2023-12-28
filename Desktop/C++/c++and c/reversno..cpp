#include<stdio.h>
int main(){
	int n;
	int r;
	int rev=0;
	scanf("%d",&n);
	for(int i=1;n!=0;i++){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d",rev);
}
