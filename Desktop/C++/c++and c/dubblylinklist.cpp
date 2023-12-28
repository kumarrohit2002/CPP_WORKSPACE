#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		Node(int data){
			this->data=data;
			this->prev=NULL;
			this->next=NULL;
		}
		~Node(){
			int val=this->data;
			if(next!=NULL){
				delete next;
				next=NULL;
			}
			cout<<"memory free for node with data "<<val<<endl;
		}
};

void insertAtHead(Node* &head,Node* &tail,int d){
	if(head==NULL){
		Node* temp=new Node(d);
		head=temp;
		tail=temp;
	}
	else{
		Node* temp=new Node(d);
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
}
void insertAtTail(Node* &head,Node* &tail,int d){
	if(tail==NULL){
		Node* temp=new Node(d);
		head=temp;
		tail=temp;
	}
	else{
		Node* temp=new Node(d);
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
	}
}
void insertAtPosition(Node* &head,Node* &tail,int p,int d){
	if(p==1){
		insertAtHead(head,tail,d);
		return;
	}
	Node* temp=head;
	int c=1;
	while(c<p-1){
		temp=temp->next;
		c++;
	}
	if(temp->next==NULL){
		insertAtTail(tail,tail,d);
		return;
	}
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
}
void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


void deleteAtPosition(Node* &head,Node* &tail,int p){
	if(p==1){
		Node* temp=head;
		head=head->next;
		//delete
		temp->next=NULL;
		delete temp;
	}
	else{
		Node* curr=head;
		Node* prev=NULL;
		int c=1;
		while(c<p){
			prev=curr;
			curr=curr->next;
			c++;
		}
		if(curr->next==NULL){
			prev->next=NULL;
			tail=prev;
			delete curr;
		}
		else{
		prev->next=curr->next;
		//delete 
		curr->next=NULL;
		delete curr;
	}
	}
}

int main(){
	Node* node1;
	Node* head=NULL;
	Node* tail=NULL;
	insertAtTail(head,tail,2);
	insertAtHead(head,tail,5);
	insertAtHead(head,tail,20);
	insertAtTail(head,tail,25);
	insertAtPosition(head,tail,2,50);
	print(head);
	cout<<"Head: "<<head->data<<endl;
	cout<<"Tail: "<<tail->data<<endl;
	deleteAtPosition(head,tail,5);
	print(head);
	cout<<"Head: "<<head->data<<endl; 
	cout<<"Tail: "<<tail->data<<endl;
	return 0;
}
