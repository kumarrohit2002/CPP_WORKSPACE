#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,6,8,3,5};
	
	for(int i=0;i<5;i++){
		int min=INT_MAX;
		int temp=0;
		for(int j=i;j<5;j++){
			if(arr[j]<min){
				min=arr[j];
				temp=j;
			}
		}
		swap(arr[i],arr[temp]);
	}
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return  0;
}
