#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int a=0;
	for (int i=1;i<=n; i++){
		for(int j=1; j<=n+1-i;j++){
			printf(" ");
		}
		
		for(int k=1;k<=i;k++){
			a=k+64;
			char ch=(char)a;
			printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}
