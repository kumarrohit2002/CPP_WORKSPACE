#include<stdio.h>
int main(){
	int n;
	int sum =0;
	scanf("%d",&n);
	int b=1;
	int a=0;
	for(int i=1;n!=0;i++){
	n=n/10;
	a++;
	sum=sum+a;
	
	}
	printf("sum of digit  is %d\n",sum);
	return 0;
}
