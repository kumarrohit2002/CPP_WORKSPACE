#include<iostream>
using namespace std;
int privet(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]>arr[mid+1]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}

int main(){
	int arr[]={7,9,10,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int privet_ele=privet(arr,n);
	cout<<privet_ele;
	return 0;
}
