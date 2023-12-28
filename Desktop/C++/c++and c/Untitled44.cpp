#include <stdio.h>
int main(){
	int p;
	int b;
	printf("Enter the base: ");
	scanf("%d",&b);
	printf("Enter the power: ");
	scanf("%d",&p);
	int result=1;
	for(int i=1;i<=p;i++){
		result=result*b;
	}
	printf("%d^%d =%d",b,p,result);
	return 0;
}
