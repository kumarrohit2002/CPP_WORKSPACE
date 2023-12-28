#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else{
			s=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int last(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
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
int main(){
	int arr[]={1,2,3,3,3,3,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key;
	cout<<"Enter your key: ";
	cin>>key;
	int f=first(arr,n,key);
	int l=last(arr,n,key);
	pair<int,int> p;
	p.first=f;
	p.second=l;
	cout<<p.first<<endl;
	cout<<p.second;
	cout<<endl<<"total number of occurrance is "<<(l-f)+1;
	return 0;
}
