#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	int op;
	int arr2[n];
	cin>>target>>op;

	for(int i=0;i<n;i++){
		arr2[i]=abs(arr[i]-target);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr2[j]>arr2[j+1] || (arr2[j]==arr2[j+1] && arr[j]<arr[j+1])){
				swap(arr2[j],arr2[j+1]);
				swap(arr[j],arr[j+1]);
			}
		}
	}
	
	for(int i=0;i<op;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
