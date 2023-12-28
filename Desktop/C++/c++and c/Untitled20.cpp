#include<stdio.h>
// number is divisible by 3,5 but not 15.............
int main()
{
	int x;
	printf("Enter the number : ");
	scanf("%d",&x);
	if (x%3==0 || x%5==0){
		if (x%15!=0){
			printf("divisible by 3,5 but not divisible 15");
		}
		else{
			printf("this number is divisible by 15");
		}
	}
	else{
		printf("not divisible by 3,5.");
	}
	return 0;
}
