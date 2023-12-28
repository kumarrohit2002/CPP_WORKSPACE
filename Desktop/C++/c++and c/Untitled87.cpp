#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n+1-i;j++){
			printf("%d",j);
		}
		for (int l=1;l<=2*i-1;l++){
			printf(" ");
		}
		for(int k=1;k<=n+1-i;k++){
			int a=1;
			a=k-1;
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
