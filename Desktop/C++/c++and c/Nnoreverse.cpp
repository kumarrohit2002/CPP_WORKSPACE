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
};

void insertAtTail(Node* &head,Node* &tail,int ele){
	Node* temp=new Node(ele);
	if(tail==NULL){
		tail=temp;
		head=temp;
	}
	else{
		tail->next=temp;
		tail=temp;
	}
}


void print(Node* &head){
	if(head==NULL){
		cout<<"linked list is empty!!!";
	}
	else{
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
}

int main(){
	Node* head=NULL;
	Node* tail=NULL;
	int n,ele;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ele;
		insertAtTail(head,tail,ele);
	}
	print(head);
	int r;
	cin>>r;
	Node* temp=head;
	for(int i=0;i<r-1;i++){
		for(int j=0;j<r-1-i;j++){
			swap(temp->data,temp->next->data);
			temp=temp->next;
		}
		temp=head;
	}
	print(head);
	
	return 0;
}
