//WAP to show following conditions using nested if else statement:
//	gender: male	salary>10000 then bonus should be 1000
//			salary <10000 and >5000, then bonus=500
//			salary <5000, then bonus=100
//	gender:female	salary>10000 then bonus should be 100
//			salary <10000 and >5000, then bonus=50
//			salary <5000, then bonus=10
#include<stdio.h>
int main(){
	char gender;
	printf("Enter the Gender: male for M or female for F: ");
	scanf("%c",&gender);
	int salary;
	printf("Enter your salary: ");
	scanf("%d",&salary);
	if(gender=='M'){
		if(salary>10000) printf("Your bonus is rs-1000");
		else if(salary<10000&&salary>5000) printf("Your bonus is rs-500");
		else printf("your bonus is rs-100");
	}
	if(gender=='F'){
		if(salary>10000) printf("Your bonus is rs-1000");
		else if(salary<10000&&salary>5000) printf("Your bonus is rs-500");
		else printf("your bonus is rs-100");
	}
	return 0;
}
