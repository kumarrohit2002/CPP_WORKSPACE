// #include<stdio.h>
// void rohit(){
// 	printf("GOOD MORNING");
// 	printf("\n");
// 	return;
// }
// int main(){
// 	rohit();
// 	rohit();
// 	return 0;
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char s[29];
	//    scanf("%s",ch);
	printf("hello: ");
	scanf("%[^\n]%*c", &s);

	printf("Hello, World!\n%s", s);

	// char s[100];
	// scanf("%[^\n]%*c", &s);

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}