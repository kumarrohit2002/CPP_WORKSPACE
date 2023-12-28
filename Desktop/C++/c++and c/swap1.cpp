#include<stdio.h>
int fun(int a,int b){
	a=a-b;
	b=a+b;
	a=b-a;
	printf("%d %d",a,b);
}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	fun(x,y);
}
