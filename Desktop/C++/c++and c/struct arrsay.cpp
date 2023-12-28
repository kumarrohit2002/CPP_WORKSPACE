#include<stdio.h>
#include<conio.h>
struct student{
	int roll;
	float cgpa;
	char name[20];
};
int main(){
	struct student s[3];
	for(int i=0;i<3;i++){
	printf("Enter the student %d details\n",i+1);
	printf("Roll no: ");
	scanf("%d",&s[i].roll);
	fflush(stdin);
	printf("CGPA   : ");
	scanf("%f",&s[i].cgpa);
	printf("NAME   : ");
	fflush(stdin);
	gets(s[i].name);
}
	for(int i=0;i<3;i++){
	printf("student %d details is\n",i+1);
	printf("ROLL NO : %d\n",s[i].roll);
	printf("CGPA    : %f\n",s[i].cgpa);
	printf("NAME    : %s\n",s[i].name);
}
float min=s[0].cgpa;
int c=1;
for(int i=0;i<3;i++){
	if(min>s[i].cgpa){
		min+s[i].cgpa;
		c=i+1;
	}
}
printf("Student %d has minimum CGPA.",c);
return 0;

	}
