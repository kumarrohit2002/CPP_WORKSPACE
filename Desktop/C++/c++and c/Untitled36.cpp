#include<stdio.h>
// number  digit count code................
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int c=0;
	while(n>=0){
		n=n/10;
		c=c+1;
	}
	printf("Digit are %d",c);
	return 0;
}
