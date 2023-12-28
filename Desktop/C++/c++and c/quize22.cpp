#include<stdio.h>
int main()
{
int i;
for(i=1;i<=5;i++)
{
if(i==2||i==3)
continue;
printf("\nHello");
}
return 0;
}
