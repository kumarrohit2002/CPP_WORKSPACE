#include<iostream>
using namespace std;
int main(){
	int array[]={1,2,3,4,5,6};
	int size=sizeof(array)/sizeof(array[0]);
	int key;
	cout<<"Enter your key:";
	cin>>key;
	int c=-1;
	for(int i=0;i<size;i++){
		if(key==array[i]){
			c=i;
			break;
		}
	}
	if(c!=-1) cout<<"key find index no. "<<c;
	else cout<<"key is not find";
	return 0;
}
