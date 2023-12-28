#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the Array:"<<endl;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int x;
	cout<<"Enter the x:";
	cin>>x;
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(array[i]-array[j]==-x){
				c=1;
				break;
			}
		}
	}
	if(c==1) cout<<"yes";
	else cout<<"No";
	return 0;
}
