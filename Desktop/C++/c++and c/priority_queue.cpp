#include<iostream>
#include<queue>
using namespace std;

void print(priority_queue<int> pq){
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;
}


int main(){
	priority_queue<int> pq;
	int n;
	cin>>n;
	int data;
	for(int i=0;i<n;i++){
		cin>>data;
		pq.push(data);
	}
	cout<<"priority queue top on: "<<pq.top()<<endl;
	print(pq);
//	while(!pq.empty()){
//		cout<<pq.top()<<" ";
//		pq.pop();
//	}
}
