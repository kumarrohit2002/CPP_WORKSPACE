#include<stdio.h>
// Is a,b,c side of triangle...........?
int main () {
	int a,b,c;
	printf("Enter first side:");
	scanf("%d",&a);
	printf("Enter second side:");
	scanf("%d",&b);
	printf("Enter third side:");
	scanf("%d",&c);
    if (a+b>c && a+c>b && c+b>a){
    	printf("a,b,c is a side of triangle.");
	}
	else{
		printf("a,b,c is not side of triangle.");
	}
	return 0;
}
