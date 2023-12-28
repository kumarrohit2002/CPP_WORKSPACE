#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int m;
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	bool a=true;
	cout<<"Common Element: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i]==arr2[j]){
				cout<<arr[i]<<" ";
				bool a=false;
			}
		}
	}
	if(a) cout<<"None";
	return 0;
}
