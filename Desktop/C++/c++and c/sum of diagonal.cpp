#include<stdio.h>

int main(){
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2;
	int d=0;
	printf("enter the r1:");
	scanf("%d",&r1);
	printf("enter the c1:");
	scanf("%d",&c1);
		printf("Enter the element of matrix1:\n");
		for(int i=0;i<=r1-1;i++){
			for(int j=0;j<=c1-1;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<=r1-1;i++){
			for(int j=0;j<=c1-1;j++){
				if(i==j){
					d=d+a[i][j];
				}
		}
	}
	printf("%d",d);
	
	
	return 0;
}
