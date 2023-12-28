#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"After rotation of arr: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	int k;
	cout<<endl<<"Enter the which time element rotate:  ";
	cin>>k;
	if(k<=n){
		k=n-k;
	}
	int p=1;
	while(p<=k){
		int last=arr[0];
		for(int i=0;i<n-1;i++){
			arr[i]=arr[i+1];
		}
		arr[n-1]=last;
		p++;
	}
	cout<<"before rotation of arr: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
