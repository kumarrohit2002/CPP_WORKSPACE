#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (int j=1;j<=n;j++){
		int a=1;
	    for (int i=1;i<=j;i++){
		 printf("%d",a);
		 a=a+2;
	}
	printf("\n");
	}
	return 0;
}
