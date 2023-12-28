#include<stdio.h>
int main(){
	int a=3,b=8,c;
	c=(a++,b-=a);
	printf("%d",c);
}
