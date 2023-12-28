#include <stdio.h>
int x = 10;
void function() {
static int x = 5;
x++;
printf("%d\n", x);
}
int main() {
int x = 20;
function();
function();
function();
printf("%d\n", x);
printf("%d\n", ::x);
return 0;
}
