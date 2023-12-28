#include <stdio.h>
#define MAX_LEN 100

int main() {
    char ch;
    char str[MAX_LEN];
    char sentence[MAX_LEN];

    scanf("%c", &ch);
    scanf("%s", str);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);

    return 0;
}




