#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int a=1;
	for(int m=1;m<=2*n+1;m++){
		printf("%d",a);
		a++;
	}
	printf("\n");
	for (int i=1;i<=n;i++){
		int a=1;
		for(int j=1;j<=n+1-i;j++){
			printf("%d",a);
			a++;
		}
		for (int k=1;k<=2*i-1;k++){
			printf(" ");
			a++;
		}
		for(int l=1;l<=n+1-i;l++){
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
