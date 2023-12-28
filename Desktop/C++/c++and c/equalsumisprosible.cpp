#include<iostream>
using namespace std;
int main(){
	int array[5]={6,2,4,3,1};
	int size=sizeof(array)/sizeof(array[0]);
	int presum=0;
	for(int i=0;i<size;i++){
		presum=presum+array[i];
		int possum=0;
		for(int j=size;j>i;j--){
			possum=possum+array[j];
		}
		if(presum==possum){
			cout<<"Equal sum is posible"<<" ";
		}
	}
	return 0;
}
