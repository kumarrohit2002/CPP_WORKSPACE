#include<stdio.h>
void swap(int a,int b){
	int temp=a;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("sawp is %d %d",a,b);
	return;
}
int main(){
	int x,y;
	printf("Enter two number: ");
	scanf("%d%d",&x,&y);
	swap(x,y);
	return 0;
}
