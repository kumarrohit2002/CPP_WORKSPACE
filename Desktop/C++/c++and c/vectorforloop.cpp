#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	//for loop
	for(int i=0;i<5;i++){
		int element;
		cin>>element;
		v.push_back(element);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	v.erase(v.end()-1);
	cout<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	v.insert(v.begin()+2,20);
	cout<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
