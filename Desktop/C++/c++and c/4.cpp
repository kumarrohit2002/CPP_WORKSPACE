#include <stdio.h>
    int main()
    {
        int x=1;
        {
            x=2;
            {
                 x=3;
            }
        }
        printf("%d",x);
        return 0;
    }
