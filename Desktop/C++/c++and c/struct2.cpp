#include<stdio.h>
#include<string.h>
struct emp{
	char emp_name[50];
	int emp_id;
	int emp_salary;
}a;
int main(){
	a.emp_id=5;
	printf("%d",a.emp_id);
	return 0;
}
