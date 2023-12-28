#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90){
		ch=ch+32;
		printf("upper");
	}
	else printf("lower");
}
