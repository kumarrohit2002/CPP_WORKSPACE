#include<stdio.h>
//1
//01
//101
//0101
//10101
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n+1-i;j++){
			if((i+j)%2==0) printf("1");
			else printf("0");
		}
		printf("\n");
	}
	return 0;
}
