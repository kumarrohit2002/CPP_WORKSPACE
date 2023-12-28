#include<stdio.h>
int main(){
	int n,b=0,a=0;
	scanf("%d",&n);
	printf("%d\n",n);
	for (int i=1;i<=n;i++){
		b=b+(n%10);
		a++;  
		n=n/10;
	}
	printf("%d",b);
	return 0;
}
