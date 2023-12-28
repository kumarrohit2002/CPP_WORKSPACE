#include<stdio.h>
#include<string.h>
struct emp{
	char emp_name[50];
	int emp_id;
	int emp_salary;
}a;
int main(){
	struct emp a;
	a.emp_id=1;
	a.emp_salary=500;
	strcpy(a.emp_name,"rohit");
	printf("name        :%s",a.emp_name);
	printf("\nemployee ID :%d",a.emp_id);
	printf("\nsalary      :%d",a.emp_salary);
	
	return 0;
}
