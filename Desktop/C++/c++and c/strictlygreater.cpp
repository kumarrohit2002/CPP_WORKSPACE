#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v(6);
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}
	cout<<"Enter the x: ";
	int x,c=0;
	cin>>x;
	for(int i=0;i<v.size();i++){
		if(x<v[i]){
			c=c+1;
		}
	}
	cout<<endl;
	cout<<c<<endl;
	return 0;
}
