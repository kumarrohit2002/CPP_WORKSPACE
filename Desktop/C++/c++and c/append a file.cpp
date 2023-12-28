#include<stdio.h>
int main(){
	FILE *prt=fopen("abc.txt","a");
	char str[100];
	gets(str);
	fputs(str,prt);
	fclose(prt);
	return 0;
}
