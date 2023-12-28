#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int re=0;
	int ld;
	while(n!=0){
		ld=n%10;
		re=re*10;
		re=re+ld;
		n=n/10;
	}
	printf("reverse digit is %d\n",re);
	return 0;
	
}
