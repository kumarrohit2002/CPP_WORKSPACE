#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	char s[10];
	fp=fopen("abc.txt","a");
	printf("Enter the string to write:\n");
	gets(s);
	fflush(stdin);
	fputs(s,fp);
	fclose(fp);
}
