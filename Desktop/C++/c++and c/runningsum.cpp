#include<iostream>
using namespace std;
int main(){
	int array[5]={5,4,1,2,3};
	int size=sizeof(array)/sizeof(array[0]);
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+array[i];
		array[i]=sum;
	}
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
}
