#include<iostream>
using namespace std;

int partation(int arr[],int f,int l){
	int pivot=arr[l];
	int i=f-1;
	int j=f;
	for(;j<l;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[l]);
	return i+1;
}

void quicksort(int arr[],int f,int l){
	if(f>=l) return;
	int pi=partation(arr,f,l);
	quicksort(arr,f,pi-1);
	quicksort(arr,pi+1,l);
	return;
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
