#include<stdio.h>
// 1
// 12
// 123 
// 1234
// 12345
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1;i<=n; i++){
		for(int j=1;j<=n+1-i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}
