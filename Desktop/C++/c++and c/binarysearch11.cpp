#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> &v,int f,int l,int target){
	if(l<f){
		return -1;
	}
	int mid=(f+l)/2;
	if(v[mid]==target) return mid+1;
	else if(v[mid]<target) return binarysearch(v,mid+1,l,target);
	else return binarysearch(v,f,mid-1,target);	
}


int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int target;
	cout<<"Enter the target element: ";
	cin>>target;
	int idx=binarysearch(v,0,n,target);
	if(idx==-1) cout<<"target is not found!!!";
	else cout<<"target is found in array with position index: "<<idx;
	
}
