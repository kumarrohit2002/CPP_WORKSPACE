//WAP to show greatest of 2 or 3 numbers using if-else.
#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
//	if(a>b&&a>c)printf("a is greatest no.");
//	else if(b>a&&b>c) printf("b is greatest no.");
//	else printf("c is greatest no.");
	if (a>b){
		if(a>c) printf("a is greatest no.");// Using nest loop..........
		else printf("c is greatest no.");
	}
	else{
		if(b>c) printf("b is greatest no.");
		else printf("c is greatest no.");
	}
	return 0;
}
