#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if (n<0){
		n=n*-1;
	}
	printf("the number:%d",n);
}
