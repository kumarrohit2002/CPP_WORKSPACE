#include<iostream>
using namespace std;


void maxheap(int arr[],int i,int n){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left < n && arr[largest] < arr[left]){
		largest=left;
	}
	if(right < n && arr[largest] < arr[right]){
		largest=right;
	}
	if(largest!=i){
		swap(arr[i],arr[largest]);
		maxheap(arr,largest,n);
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=n/2-1;i>=0;i--){
		maxheap(arr,i,n);
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
