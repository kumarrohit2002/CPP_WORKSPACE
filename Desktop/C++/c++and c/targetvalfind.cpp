#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int f=0;
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			f=1;
		}
	}
	if(f){
		cout<<"The target value "<<target<<" is present";
	}
	else{
		cout<<"The target value "<<target<<" is not present";
	}
	return 0;
}
