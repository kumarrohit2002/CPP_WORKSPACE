#include<stdio.h>
int main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	if (x>99 && x<1000){
		printf("its a three digit number.");
	}
	else{
		printf("Not a three digit number.");
	}
	return 0;
}
