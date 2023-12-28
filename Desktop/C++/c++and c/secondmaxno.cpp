#include<iostream>
using namespace std;
int main(){
	int array[5]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);
	int max=INT_MIN;
	int secondmax=INT_MIN;
	for(int i=0;i<size;i++){
		if(max<array[i]) max=array[i];
	}
	for(int i=0;i<size;i++){
		if(secondmax<array[i] && max!=array[i]) secondmax=array[i];
	}
	cout<<"first max number is: "<<max<<endl;
	cout<<"second max number is: "<<secondmax;
	return 0;
}
