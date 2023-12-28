#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int n,int key){
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			break;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}



int aplly(int arr[],int n,int pivet,int key){
	int index=-1;
	if(arr[pivet]<=key && key<=arr[n-1]){
		index=binarysearch(arr,pivet,n,key);
	}
	else{
		index=binarysearch(arr,0,pivet,key);
	}
	return index;
}

int pivetf(int arr[],int n){
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
	int key;
	cout<<"enter the target element: ";
	cin>>key;
	int pivet=pivetf(arr,n);
	cout<<"your index is: "<<aplly(arr,n,pivet,key);
	return 0;
}
