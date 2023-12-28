#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){
	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	if(arr[mid]<key){
		return binarysearch(arr,mid+1,e,key);
	}
	else{
		return binarysearch(arr,s,mid-1,key);
	}
	
}
int main(){
	int arr[5]={1,2,3,4,5};
	int idx=binarysearch(arr,0,5,4);
	cout<<idx;
	return 0;
}

