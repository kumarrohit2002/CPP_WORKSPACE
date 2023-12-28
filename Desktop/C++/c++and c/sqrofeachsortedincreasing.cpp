#include<iostream>
#include<math.h>
using namespace std;
void sorting(int arr[],int size){
	for(int j=0;j<size;j++){
		for(int i=0;i<size-1;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}
int main(){
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		arr[i]=pow(arr[i],2);
	}
	sorting(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
