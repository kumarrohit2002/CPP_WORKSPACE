#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int d){
		this->data=d;
		this->left=this->right=NULL;
	}
};

class BST{
	public:
		Node* root;
		BST(){
			this->root=NULL;
		}
};

Node* insertNode(Node* root,int d){
	if(root==NULL){
		Node* temp=new Node(d);
		return temp;
	}
	if(root->data > d){
		root->left=insertNode(root->left,d);
	}
	if(root->data < d){
		root->right=insertNode(root->right,d);
	}
	return root;
}

void display(Node* root){
	if(root==NULL) return;
	display(root->left);
	cout<<root->data<<" ";
	display(root->right);
}


int main(){
	BST b;
	int n;
	cin>>n;
	int data;
	for(int i=0;i<n;i++){
		cin>>data;
		b.root=insertNode(b.root,data);
	}
	display(b.root);
	return 0;
}
