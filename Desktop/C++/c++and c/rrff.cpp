#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
	scanf("%c", &ch);
	printf("%c\n", ch);
	char w[5];
	scanf("%s",w);
	printf("%s\n",w);
    char st[100];
    scanf("%[^\n]%*c", &st);
    printf("%s\n",st);
    return 0;
}
