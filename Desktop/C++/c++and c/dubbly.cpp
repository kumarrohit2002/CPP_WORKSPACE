#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* prev;
		Node* next;
		//constructor.......
		Node(int data){
			this->data=data;
			this->next=NULL;
			this->prev=NULL;
		}
};

void insertAtHead(Node* &head,int d){
	Node* temp=new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;
}

void insertAtTail(Node* &tail,int d){
	Node* temp=new Node(d);
	temp->prev=tail;
	tail->next=temp;
	tail=temp;
}

void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	Node* node1=new Node(5);
	Node* head=node1;
	Node* tail=node1;
	print(head);
	insertAtHead(head,1);
	insertAtTail(tail,10);
	print(head);
	cout<<"head: "<<head->data<<endl;
	cout<<"Tail: "<<tail->data<<endl;
	return 0;
}
