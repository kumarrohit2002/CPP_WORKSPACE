#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	cout<<"size"<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.push_back(1);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.push_back(2);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity();
	
	v.push_back(3);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.push_back(4);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.resize(5);
	cout<<"size"<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.resize(13);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	
	return 0;
}
