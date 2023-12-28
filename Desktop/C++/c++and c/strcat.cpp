#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char p1[]="heLLo";
	char p2[]="welcom";
	printf("%s\n",strcat(p1,p2));
	printf("%s\n",p1);
	printf("%s\n",strcat(p2,p1));
	printf("%s\n",p2);
	return 0;
}
