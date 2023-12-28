#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int ans[100];
	int k=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ans[i]=arr[i];
		k++;
	}
	int m;
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++){
		cin>>arr2[i];
		ans[k]=arr2[i];
		k++;
	}
	for(int i=0;i<k;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
