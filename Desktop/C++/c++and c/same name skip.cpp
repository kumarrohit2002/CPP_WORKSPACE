#include<iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	string arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int index=-1;
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(arr[i]==arr[j]){
				index=j;
			}
		}
	}
	
	for(int i=0;i<size;i++){
		if(i==index){
			continue;
		}
		else{
			cout<<arr[i]<<endl;
		}
	}
	return 0;
}
