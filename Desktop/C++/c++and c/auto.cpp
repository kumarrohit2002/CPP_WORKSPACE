#include<stdio.h>
int main(){
	auto int a=5;
	{
		auto int b=2;
		printf("%d",a);
	}
	printf("%d",a);
	return 0;
}
