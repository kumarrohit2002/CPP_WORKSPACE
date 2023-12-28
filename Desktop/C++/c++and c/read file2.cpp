#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("abc.txt","r");
	if(fp==NULL){
		printf("file is not exist!");
	}
	else{
		while(ch!=EOF){
			printf("%c",ch);
			ch=fgetc(fp);
		}
	}
	fclose(fp);
	return 0;
}
