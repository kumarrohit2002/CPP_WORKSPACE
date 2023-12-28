#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a=i-1;
		
		for(int l=1;l<=n+1-i;l++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			int r=j+64;
			char cha=(char)r;
			printf("%c",cha);
		}
		for(int k=1;k<=i-1;k++){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			a--;
		}
		printf("\n");
		}
	return 0;
}
