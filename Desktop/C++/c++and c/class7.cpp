#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		ch=ch+32;
		printf("upper");
	}
	else printf("lower");
}

