#include<stdio.h>
int pass(int n){
	if(n==0) return n;
	printf("%d\n",n);
	pass(--n);
}
int main(){
	int n;
	scanf("%d",&n);
	pass(n);
	return 0;
}
