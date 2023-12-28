#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[10]="hello"; 
	int i=0;
	while(str[i]!='\0'){
		if(str[i]<=65 && str[i]>=97);
		else{
			str[i]=str[i]-32;
		}
		i++;
	}
	puts(str);
	return 0;
}
