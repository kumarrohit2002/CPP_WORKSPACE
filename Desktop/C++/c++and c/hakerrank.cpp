#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
	scanf("%c", &ch);
	printf("%c\n", ch);
//    char s[100];
//    scanf("%c",&s);
//    printf("%s\n",s);
    char st[100];
    scanf("%[^\n]%*c", &st);
    printf("%s\n",st);
//     char ch;
//     scanf("%c",&ch);
//     char s[100];
//     scanf("%s",s);
//     char s1[100];
//     scanf("%s",s);
//     printf("%c\n%s\n%s\n",ch,s,s1);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}





