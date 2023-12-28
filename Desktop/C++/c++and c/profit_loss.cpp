#include<stdio.h>
int main(){
	float cp,sp;
	scanf("%f",&cp);
	scanf("%f",&sp);
	float a=sp-cp;
	if(a==0){
		printf("no profit no loss");
	}
	if(a>0){
		printf("your profit is %0.2f",a);
	}
	else{
		printf("Your loss is %0.2f",-a);
	}
	return 0;
}
