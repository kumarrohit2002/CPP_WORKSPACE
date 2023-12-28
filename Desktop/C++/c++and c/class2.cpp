#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the three: ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b&&a>c)?printf("%d is greatest",a):
	(b>c&&b>a)?printf("%d is greatest",b):
	((c>b&&c>a)?printf("%d is greatest",c):printf(" "));
	return 0;
}
