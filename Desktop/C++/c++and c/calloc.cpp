#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,n1,n2,i,sum=0;
	printf("Enter the number of element: ");
	scanf("%d",&n1);
	p=(int *)malloc(n1*sizeof(int));
	if(p==NULL){
		printf("memory not allocated");
	}
	else{
		printf("enter the element:\n");
		for(int i=0;i<n1;i++){
			scanf("%d",p+i);
		    sum=sum+ *(p+i);
		}
	}
	printf("%d",sum);
	free(p);
	return 0;
}
