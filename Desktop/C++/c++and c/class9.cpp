#include<stdio.h>
int main(){
	int y;
	scanf("%d",&y);
	if(y%4==0){
		if(y%100!=0) printf("leap");
		else printf(" not leap");
	}
	else printf(" not leap");
}
