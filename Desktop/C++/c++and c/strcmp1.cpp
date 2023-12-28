#include<stdio.h>
void ftoa1(float f1,char s[])
{
sprintf(s,"%f",f1);// s is array, %f format specifier and f1 is float variable
}
int main()
{
char str[20];
float f=12.340000;
ftoa1(f,str);//it means convert float value f to string and store it in str// function call//
printf("\n%s",str);
return 0;
}
