#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[10]="hello";
	int i=0;
	int c=0;
	while(str[i]!='\0'){
		c=c+1;
		i++;
	}
	for(int i=c;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
