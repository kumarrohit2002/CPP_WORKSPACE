#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"original array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int val;
	cin>>val;
	
	if((n-1)>=val){
	val=val-1;
	cout<<"Updated array: ";
	for(int i=0;i<n;i++){
		if(i!=val){
			cout<<arr[i]<<" ";
		}
	}
}
	else{
		cout<<"Invaild position!";
	}
	return 0;
}
