#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=1;n!=0;i++){
	n=n/10;
	a++;
	}
	printf("%d",a);
	return 0;
}
