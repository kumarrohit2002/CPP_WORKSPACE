#include <stdio.h>
#include <ctype.h>
int main()
    {
        char i = 9;
        printf("%d\n",isdigit(i));
        if (isdigit(i))
            printf("digit\n");
        else
            printf("not digit\n");
            return 0;
    }
