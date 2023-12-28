#include<stdio.h>
int main() {
	FILE *fp;
	char ch;
	fp=fopen("abc.txt","w");
	if(fp==NULL) printf("file not exist!");
	else{
		while(1){
			ch=getchar();
			if(ch=='!') break;
			fputc(ch,fp);
		}
	}
	fclose(fp);
	return 0;
}
