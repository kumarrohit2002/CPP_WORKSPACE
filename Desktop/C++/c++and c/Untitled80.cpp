#include<stdio.h>
//WAP FIND THE AREA OF CIRCLE
int main(){
	float r,area,pi;
	pi=3.1415;
	printf("Enter the radius: ");
	scanf("%f",&r);
	area=pi*r*r;
	printf("Area of circle is %f",area);
	return 0;
}
