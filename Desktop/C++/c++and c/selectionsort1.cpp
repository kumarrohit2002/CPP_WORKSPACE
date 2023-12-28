#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
	for(int j=0;j<n-1;j++){
		int min=INT_MAX;
		int min_index=-1;
		for(int i=j;i<n;i++){
			if(arr[i]<min) {
				min=arr[i];
				min_index=i;
			}
		}
		swap(arr[j],arr[min_index]);
	}
}
int main(){
	int arr[]={4,2,5,1,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
