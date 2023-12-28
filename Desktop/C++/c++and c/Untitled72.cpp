#include<stdio.h>
//     1
//    121
//   12321
//  1234321
// 123454321
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a=i-1;
		for(int l=1;l<=n+1-i;l++){
			printf("-");
		}
		for(int j=1;j<=i;j++){
			printf("%d",j);
		}
		for(int k=1;k<=i-1;k++){
			
			printf("%d",a);
			a--;
		}
		printf("\n");
		}
	return 0;
	}
	

