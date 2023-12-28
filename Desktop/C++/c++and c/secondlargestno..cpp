#include<iostream>
using namespace std;
int greatest(int array[],int size){
	int max=INT_MIN;
	int index=-1;
	for(int i=0;i<size;i++){
		if(max<array[i]){
			index=i;
			max=array[i];
		};
	}
	//cout<<max<<endl;
	return index;
}
int main(){
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);
	int index=greatest(array,size);
	array[index]=0;
	int secondindex=greatest(array,size);
//	for(int i=0;i<size;i++){
//		cout<<array[i]<<" ";
//	}
	cout<<"second largest number is: "<<array[secondindex];
	return 0;
}
