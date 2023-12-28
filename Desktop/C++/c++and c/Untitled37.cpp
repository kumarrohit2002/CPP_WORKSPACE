#include<stdio.h>
int main(){
	 int n;
	 printf("Enter the number :");
	 scanf("%d",&n);
	 int sum=0;
	 int c=0;
	 while(n!=0){
	 
	 	c=c+1;
	 	sum=sum+(n%10);
	 	n=n/10;
	 }
	 printf("digit are %d\n",c);
	 printf("sum of the digit = %d",sum);
	return 0;
}
