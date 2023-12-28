#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
		~Node(){
			int val=this->data;
			if(this->next!=NULL){
				delete next;
				this->next=NULL;
			}
			cout<<"Deleted value: "<<val<<endl;
		}
};

void insertNode(Node* &tail,int ele,int d){
		//for empty linked list.............
	if(tail==NULL){
		Node* temp=new Node(d);
		tail=temp;
		temp->next=temp;
	}
	else{
		
		//non empty linked list.........
		Node* curr=tail;
		while(curr->data!=ele){
			curr=curr->next;
		}
		Node* temp=new Node(d);
		temp->next=curr->next;
		curr->next=temp;
		
		
	}
}

void print(Node* tail){
	if(tail==NULL){
		cout<<"linked list is empty!!!!";
	}
	else{
		Node* temp=tail;
		do{
			cout<<tail->data<<" ";
			tail=tail->next;
		}
		while(temp!=tail);
	}
	cout<<endl;
}

void deleteNode(Node* &tail,int ele){
	if(tail==NULL){
		cout<<"linked list is empty, please cheack again!!!!"<<endl;
	}
	else{
		Node *prev=tail;
		Node* curr=prev->next;
		while(curr->data!=ele){
			prev=curr;
			curr=curr->next;
		}
		prev->next=curr->next;
		if(curr==prev){
			tail=NULL;
		}
		if(tail==curr){
			tail=prev;
		}
		curr->next=NULL;
		delete curr;
	}
}

int main(){
	Node* tail=NULL;
	deleteNode(tail,20);
	insertNode(tail,5,2);
	insertNode(tail,2,20);
	print(tail);
	deleteNode(tail,20);
	print(tail);
	
	return 0;
}
