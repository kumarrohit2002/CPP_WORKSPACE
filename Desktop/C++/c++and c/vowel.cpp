#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[10]="hello";
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			printf("%c",str[i]);
		}
		i++;
	}
	return 0;
}
