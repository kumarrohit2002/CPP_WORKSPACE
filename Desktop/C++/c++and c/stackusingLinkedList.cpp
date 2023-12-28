#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
		Node(int d){
			this->data=d;
			this->next=NULL;
		}
};

class stack{
	Node* head;
	int capacity;
	int currsize;
	public:
		stack(int c){
			this->capacity=c;
			this->head=NULL;
			this->currsize=0;
		}
		
		bool isempty(){
			return head==NULL;
		}
		bool isfull(){
			return currsize==capacity;
		}
		
		int top(){
			return head->data;
		}
		
		void push(int d){
			if(currsize==capacity){
				cout<<"stack Overflow\n";
				return;
			}
			Node* temp=new Node(d);
			if(head==NULL){
				head=temp;
				return;
			}
			temp->next=head;
			head=temp;
		}
		
		void pop(){
			if(currsize==capacity){
				cout<<"stack underflow!!!\n";
				return;
			}
			Node* temp=head;
			head=temp->next;
			temp->next=NULL;
			free(temp);             // run in vs code..........
			return;
		}
};

int main(){
	stack s(5);
	s.push(5);
	cout<<s.top();
	return 0;
}
