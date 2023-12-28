#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int a;
	printf("which element you search:");
	scanf("%d",&a);
	int b=0;
	for(int i=0;i<5;i++){
		if(arr[i]==a){
			b=1;
			break;
		}
	}
	if(b==1) printf("element is found");
	else printf("element is not found");
	
	return 0;
}
