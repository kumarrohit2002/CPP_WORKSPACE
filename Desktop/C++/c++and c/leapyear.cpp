//: WAP to find that year entered is leap year or not using if-else.
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%4==0 && n%100!=0 ||n%400==0) printf("leap");
	else printf("not leap");
	return 0;
}
