#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"before insert: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int x,p;
	cin>>x>>p;
	for(int i=n;i>=p;i--){
		arr[i]=arr[i-1];
	}
	arr[p-1]=x;
	cout<<"after insert: ";
	for(int i=0;i<n+1;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
