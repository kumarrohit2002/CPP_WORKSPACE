#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	fp=fopen("abc.txt","r");
	if(fp==NULL) printf(" file not exit");
	else printf("file exit\n");
	char ch=fgetc(fp);
	while(1){
		printf("%c",ch);
		if(ch==EOF) break;
		ch=fgetc(fp);
	}
	return 0;
}
