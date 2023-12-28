#include<stdio.h>
// Ap 4,7,10,13,16.........nth
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int a=1;
	int c;
	printf("common difrence: ");
	scanf("%d",&c);
	for(int i=1;i<=n;i++){
		printf("%d,",a);
		a=a+c;
	}
	return 0;
}
