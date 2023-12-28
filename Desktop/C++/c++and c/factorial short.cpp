#include<stdio.h>
int fun(int n){
	if(n==0 ||n==1){
		return 1;
	}
	else return n*fun(n-1);
}
int main(){
	printf("%d",fun(7));
	return 0;
}
