#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	int n;
	fp=fopen("abc.txt","w");
	putw(4,fp);
	fclose(fp);
	fp=fopen("abc,txt","r");
	n=getw(fp);
	printf("%d",n);
}
