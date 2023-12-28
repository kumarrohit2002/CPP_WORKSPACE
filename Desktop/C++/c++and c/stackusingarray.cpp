#include<iostream>
using namespace std;

class Node{
	int *arr;
	int top;
	int capacity;
	public:
	Node(int c){
		this->top=-1;
		this->arr=new int[c];
		this->capacity=c;
	}
	void push(int d){
		if(top==capacity-1){
			cout<<"overflow condition!!!\n";
			return;
		}
		top++;
		arr[top]=d;
	}
	
	void pop(){
		if(top==-1){
			cout<<"underflow condition!!!\n";
			return;
		}
		top--;
		return;
	}
	
	int gettop(){
		return arr[top];
	}
	bool isempty(){
		return top==-1;
	}
	bool isfull(){
		return top==capacity-1;
	}
};


int main(){
	Node s(5);
	int n;
	while(1){
		cin>>n;
		s.push(n);
		if(s.isfull()) break;
	}
	
	while(!s.isempty()){
		cout<<s.gettop()<<" ";
		s.pop();
	}	
	return 0;
}
