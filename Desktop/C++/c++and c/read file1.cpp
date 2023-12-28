#include<stdio.h>
int main(){
	FILE *prt=fopen("abc.txt","r");
	char str[100];
	while(fgets(str,100,prt)!=NULL){
		printf("%s",str);
	}
	return 0;
}
