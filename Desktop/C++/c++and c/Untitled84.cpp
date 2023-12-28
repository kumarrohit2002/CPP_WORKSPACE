#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int m=1;m<=2*n+1;m++){
		printf("*");
	}
	printf("\n");
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n+1-i;j++){
			printf("*");
		}
		for (int k=1;k<=2*i-1;k++){
			printf(" ");
		}
		for(int l=1;l<=n+1-i;l++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
