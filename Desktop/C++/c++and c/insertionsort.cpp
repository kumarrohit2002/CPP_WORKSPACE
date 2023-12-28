#include<iostream>
using namespace std;

//void insertionsort(int arr[],int n){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(arr[j]>arr[i]) swap(arr[j],arr[i]);
//			else break;
//		}
//	}
//}

void insertionsort(int arr[],int n){
	for(int i=1;i<n;i++){
		int temp=arr[i];  //2
		for(int j=i-1;j>=0;j--){
			if(arr[j]>arr[i]) {
				arr[j]=arr[i]; //2
//				arr[i]=temp;   //4
			}
			else break;
		}
		
		
	}
}

int main(){
	int arr[]={4,2,6,5,7,8,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
