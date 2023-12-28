#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr1[n];
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
		arr1[i]=cnt;
	}
	int max_idx=0;
	for(int i=0;i<n;i++){
		if(arr1[i]>arr1[max_idx]){
			max_idx=i;
		}
	}
	cout<<arr[max_idx];
	return 0;
}
