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
	printf("Enter the new size:");
	scanf("%d",&n2);
	p=(int *)realloc(p,n2*sizeof(int));
	if(p==NULL){
		printf("memory not allocated");
	}
	else{
		printf("enter the element:\n");
		for(int i=n1;i<=n2-1;i++){
			scanf("%d",p+i);
		}		
	}
	for(int i=0;i<=n2-1;i++){
			printf("%d ",*(p+i));
		}
	free(p);
	return 0;
}
