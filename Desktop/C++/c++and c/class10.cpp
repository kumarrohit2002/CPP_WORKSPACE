#include<stdio.h>
int main(){
	int a,b,c,choice;
	printf("menu is- \n");
	printf("add for 1\n");
	printf("sub for 2\n");
	printf("mul for 3\n");
	printf("div for 4\n");
	printf("Enter a,b,your choice: ");
	scanf("%d%d%d",&a,&b,&choice);
	switch(choice){
		case 1:{
			c=a+b;
			printf("%d",c);
			break;
		}
		case 2:{
			c=a-b;
			printf("%d",c);
			break;
		}
		case 3:{
			c=a*b;
			printf("%d",c);
			break;
		}
		case 4:{
			c=a/b;
			printf("%d",c);
			break;
		}
		default:{printf("not is menu here");
			break;
		}
	}
}
