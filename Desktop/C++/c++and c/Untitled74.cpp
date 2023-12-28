#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (int i=1; i<=n;i++){
		int a=i+96;
		for (int j=1; j<=i;j++){
			char ch=(char)a;
			printf("%c",ch);
			a++;
		}
		printf("\n");
	}
	return 0;
}
