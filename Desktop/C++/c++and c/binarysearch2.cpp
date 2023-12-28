#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> &v,int target){   
    // time complaxity  O(logn)
    //space complaxity  O(1)
	int first=0;      // first index...
	int last=v.size()-1;  // last index - 1;
	while(first<=last){
		int mid=(first+last)/2;
		if(v[mid]==target) return mid;
		else if(v[mid]<target) first=mid+1;
		else last=mid-1;
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	vector<int> v(n);
	cout<<"enter the element of array: ";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int target;
	cout<<"Enter your target: ";
	cin>>target;
	int index=binarysearch(v,target);
	cout<<index;
	return 0;
}
