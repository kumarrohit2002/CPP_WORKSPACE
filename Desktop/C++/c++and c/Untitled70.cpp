#include<stdio.h>
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (int i=1; i<=n;i++){
		for(int j=1; j<=n+1-i;j++){
			printf(" ");
		}
		for(int k=2; k<=2*i;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
