#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int *p=arr;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+ *(p+i);
	}
	cout<<sum;
	return 0;
}
