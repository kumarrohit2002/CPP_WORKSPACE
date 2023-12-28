#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int tar;
	cin>>tar;
	int arr_idx=0;
	for(int i=0;i<n;i++){
		if(arr[i]<=tar){
			arr_idx=i;
		}
	}
	int j=0;
	int miss_ele=tar;
	for(int i=arr_idx+1;i<n+1;i++){
		j++;
		if(tar+j==arr[i]){
			continue;
		}
		else{
			miss_ele=tar+j;
			break;
		}
	}
	cout<<miss_ele;
	return 0;
}
