#include<stdio.h>
#include<string.h>
int main(){
	char ch[20];
	printf("enter the string:\n");
	gets(ch);
	fflush(stdin);
	printf("string is : ");
	puts(ch);
	return 0;
}
