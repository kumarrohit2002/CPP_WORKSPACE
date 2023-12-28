#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct name{
    int no1;
    char fname[20];
    char lname[20];
    int no2;
};

int main() {
    struct name s;
    scanf("%d",&s.no1);
    fflush(stdin);
    gets(s.fname);
    gets(s.lname);
	scanf("%d",&s.no2);
    fflush(stdin);
    printf("%d %s %s %d",s.no1,s.fname,s.lname,s.no2);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

