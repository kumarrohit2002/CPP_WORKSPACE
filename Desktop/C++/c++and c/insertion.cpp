#include<iostream>
using namespace std;
int main(){
	int arr[100]={0};
	int i,x,pos,n=10;
	//initial array of size of
	for(int i=0;i<10;i++){
		arr[i]=i+1;
	}
	//print the original array
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl;
	
	//element to be inserted
	x=50;
	
	//position at which element
	//is to be inserted
	pos=5;
	
	//increment the size by 1
	
	n++;
	
	//shift element forward
	for(int i=n-1;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	
	//insert x at pos
	arr[pos-1]=x;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
		
		
	
	return 0;
}
