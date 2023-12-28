#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	float root=sqrt(a);
	printf("square root of a is %f\n",root);
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	int power=pow(2,x);
	printf("2^%d is %d",x,power);
	return 0;
}
