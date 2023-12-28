#include<stdio.h>
extern int i=10;
void show(){
	printf("%d\n",i);
	i++;
}
int  main(){
	int i=64;
	show();
	printf("%d\n",i);
}
