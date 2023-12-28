#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp=fopen("abc.txt","a");
	char s[10];
	printf("Enter the string \n");
	gets(s);
	fflush(stdin);
	fputs(s,fp);
	fclose(fp);
	return 0;
}
