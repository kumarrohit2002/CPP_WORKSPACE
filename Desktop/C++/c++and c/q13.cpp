#include<stdio.h>
int fun1(){
	auto int  a=10;
	printf("\n%d",a);
}
int fun2(){
	auto int a=20;
	printf("\n%d",a);
}
int main(){
	auto int a=30;
	fun1();
	fun2();
	printf("\n%d",a);
	return 0;
}
