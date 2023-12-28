#include<stdio.h>
int main(){
	int arr[10],i,n,temp,key;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("Enter the key to search");
	scanf("%d",&key);
//	int f,l,m;
//	f=0;
//	l=n-1;
//	m=(f+1)/2
//	while(f<=1){
//		
//	}
	for(i=0;i<n;i++){
		if(key==arr[i]){
			printf("found");
		}
	}
	
	
	return 0;
}
