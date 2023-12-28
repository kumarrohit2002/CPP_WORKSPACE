#include<stdio.h>
int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if ((x%3==0 || x%5==0) && x%15!=0){
		printf("this number is divisible by 3,5");
	}
	else{
		printf("this is not divisible by 3,5.");
	}
	return 0;
}
