#include<iostream>
using namespace std;
int main(){
	int array[5];
	for(int idx=0;idx<5;idx++){
		cin>>array[idx];
	}
	cout<<"Array is: "<<" ";
	for(int idx=0;idx<5;idx++){
		cout<<array[idx]<<" ";
	}
	return 0;
}
