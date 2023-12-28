#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		if (arr[i][1]==1){
			cout<<arr[i][1]<<" ";
		}
	//	cout<<endl;
		else if(arr[i][1]==2){
			cout<<arr[i][1]<<" ";
		}
		else{
			
		}
	}
	return 0;
}
