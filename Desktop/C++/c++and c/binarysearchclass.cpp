#include<iostream>
using namespace std;
class ele{
	public:
		int arr[5];
};

int binarysearch(int arr[],int s,int e,int key){
	if(s>e){
		cout<<"element is not found";
	}
	int mid=(s+e)/2;
	if(arr[mid]==key) return mid;
	else if(arr[mid]<key) return binarysearch(arr,mid+1,e,key);
	else return binarysearch(arr,s,mid-1,key);
}


int main(){
	ele a;
	for(int i=0;i<5;i++){
		cin>>a.arr[i];
	}
	int m;
	cout<<"enter search element: ";
	cin>>m;
	int idx=binarysearch(a.arr,0,5,m);
	cout<<"ele position is :"<<idx+1;
	return 0;
}
