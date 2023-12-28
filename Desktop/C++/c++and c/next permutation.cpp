//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){    //1 2 3 4
//		cin>>arr[i];
//	}
//	int idx=-1;
//	for(int i=n-1;i>0;i--){
//		if(arr[i]>arr[i-1]){
//			idx=i-1;
//			break;
//		}
//	}
//	if(idx==-1){
//		for(int i=n-1;i>=0;i--){
//			cout<<arr[i]<<" ";
//		}
//	}
//	else{
//		for(int i=idx;i<n;i++){
//			for(int i=idx;i<n;i++){
//				if(arr[i]<arr[i+1]){
//					swap(arr[i],arr[i+1]);
//				}
//			}
//		}
//		for(int i=0;i<n;i++){
//			cout<<arr[i]<<" ";
//		}
//	}
//	return 0;
//}



#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& arr){
	int n = arr.size(), i, j;
	for (i = n - 2; i >= 0; i--) {
		if (arr[i] < arr[i + 1]) {
			break;
		}
	}
	if (i < 0) {
		reverse(arr.begin(), arr.end());
	}
	else {
		for (j = n - 1; j > i; j--) {
			if (arr[j] > arr[i]) {
				break;
			}
		}
		swap(arr[i], arr[j]);
		reverse(arr.begin() + i + 1, arr.end());
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	nextPermutation(arr);
	for (auto i : arr) {
		cout << i << " ";
	}
	return 0;
}

