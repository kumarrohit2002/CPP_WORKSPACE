#include<stdio.h>
int main(){
	FILE *fp=fopen("abc.txt","r");
	char ch[40];
	if(fp==NULL){
		printf("file is not exist!");
	}
	else{
		while(fgets(ch,22,fp)!=NULL){
			printf("%s\n",ch);
		}
	}
	fclose(fp);
	return 0;
}
