#include<stdio.h>
// factorial of a given number...............
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int pro=1;
	for(int i=1;i<=n;i++){
		pro=pro*i;
		printf("%d!   =  %d\n",i,pro);
	}
	return 0;
}
