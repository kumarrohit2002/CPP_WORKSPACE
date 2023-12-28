#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> st){
	if(st.empty()) return;
	cout<<st.top()<<" ";
	st.pop();
	display(st);
	return;
}

int main(){
	stack<int> st;
	int n;
	cin>>n;
	int data;
	for(int i=0;i<n;i++){
		cin>>data;
		st.push(data);
	}
	display(st);
	return 0;
}
