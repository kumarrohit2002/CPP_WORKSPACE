#include<stdio.h>
int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if (x%5==0 && x%3==0){
		printf("this number is divisibal by 3 and 5.");
	}
	else{
		printf("this number is not divisible by 3 and 5.");
	}
	return 0;
}
