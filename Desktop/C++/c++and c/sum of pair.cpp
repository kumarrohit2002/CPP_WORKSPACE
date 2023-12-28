#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v(5);
	cout<<"Enter the vector:"<<endl;
	for(int i=0;i<5;i++){
		cin>>v[i];
	}
	int x;
	cout<<"enter the sum of pair: ";
	cin>>x;
	for(int i=0;i<5;i++){
		for(int j=i;j<5;j++){
			if(v[i]+v[j]==x) cout<<"index no. "<<i<<" and "<<j<<" is "<<"sum of pair."<<endl;
		}
	}
	return 0;
}
