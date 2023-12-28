#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int sum;
	if (n%2==0){
		sum=(-n)/2;
	}
	else {
	sum=(-n)/2+n;
	}
	printf("sum = %d",sum);
	
	return 0;
}
