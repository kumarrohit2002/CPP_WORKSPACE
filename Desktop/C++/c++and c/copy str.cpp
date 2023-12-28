#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[10]="hello";
	char str1[10];
	int i=0;
	while(str[i]!='\0'){
		str1[i]=str[i];
		i++;
	}
	puts(str1);
	return 0;
}
