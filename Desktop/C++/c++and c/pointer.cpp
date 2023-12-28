#include<stdio.h>
int main(){
	int x=10;
	int *p;
	p=&x;
	printf("%p %p %p",&*p,*&p,&x);
	return 0;
}
