#include<stdio.h>
int main(){
	int a,b,c;
	a=4;
	b=2;
	c=(a++,b-=a);
	printf("%d",c);
	return 0;
}
