#include<stdio.h>
//1234...........
//1234.........
//1234
//1234
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n+4-i;j++){
			if(j%2!=0){
				printf("%d",j);
			}	
		}
		printf("\n");
	}
	return 0;
}
