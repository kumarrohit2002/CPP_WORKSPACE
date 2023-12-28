#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[20]="hello";
	char str1[10]=" rohit";
	
	int i=0;
	int c=0;
	int cp=0;
	int j;
	while(str[i]!='\0'){
		c=c+1;
		i++;
	}
	i=0;
	while(str1[i]!='\0'){
		cp=cp+1;
		i++;
	}
	j=0;
	for(int i=c;i<c+cp;i++){
		
		str[i]=str1[j];
		j++;
	}
	str[c+cp]='\0';
	puts(str);
	return 0;
}
