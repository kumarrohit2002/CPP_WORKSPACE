#include<stdio.h>
int power(int a,int b){
	if(b==1 ||b==0) return a;
	int c=power(a,b/2);
	int d;
	if(b%2==0)  d=c*c;
	else d=c*c*a;
	return d;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c=power(a,b);
	printf("%d",c);
	return 0;
}
