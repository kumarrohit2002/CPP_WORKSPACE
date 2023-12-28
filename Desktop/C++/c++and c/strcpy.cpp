#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char p1[100];
	char p2[]="welcome";
	strcpy(p1,p2);
	printf("%s",p1);
	return 0;
}
