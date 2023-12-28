#include<stdio.h>
//take three positive integers input and print the greatest of them...........?
int main() {
	int x,y,z;
	printf("Enter the first number: ");
	scanf("%d",&x);
	printf("Enter the second number: ");
	scanf("%d",&y);
	printf("Enter the third number: ");
	scanf("%d",&z);
	if (x>y && x>z){
		printf("%d number is greatest.",x);
	}
	if (y>x && y>z){
		printf("%d number is greatest.",y);
	}
	if (z>x && z>y){
		printf("%d number is greatest.",z);
	}
	return 0;
}
