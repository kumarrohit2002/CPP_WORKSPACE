 #include <stdio.h>
 #include<string.h>
    int main()
    {
        char str[10] = "hello";
        char *p = strrchr(str, 'l');
        printf("%c\n", *(++p));
    }
