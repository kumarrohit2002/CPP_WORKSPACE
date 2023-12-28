#include<stdio.h>
int main(){
//	FILE *prt=fopen("abc.txt","r");
//	char str[100];
//	while(fgets(str,100,prt)!=NULL){
//		printf("%s",str);
//	}
	FILE *prt=fopen("abc.txt","a");
	char str[100];
	gets(str);
	fputs(str,prt);
	fclose(prt);
	return 0;
}
