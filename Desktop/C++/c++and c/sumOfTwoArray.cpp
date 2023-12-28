#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	int m;
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	if(n>m){
		for(int i=0;i<n;i++){
			if(i<m){
				arr1[i]=arr1[i]*arr2[i];
			}
			cout<<arr1[i]<<" ";
		}
	}
	else{
		for(int i=0;i<m;i++){
			if(i<n){
				arr2[i]=arr2[i]*arr1[i];
			}
			cout<<arr2[i]<<" ";
		}
	}
	return 0;
	
}
