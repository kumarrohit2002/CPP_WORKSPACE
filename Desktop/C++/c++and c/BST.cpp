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

void print(Node* root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
	return;
}

bool search(Node* root,int key){
	if(root==NULL) return false;
	if(root->data == key) return true;
	if(root->data > key) return search(root->left,key);
	if(root->data < key) return search(root->right,key);
	return false;
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
	print(b.root);
	int x;
	cout<<"Enter your key: ";
	cin>>x;
	int f=search(b.root,x);
	if(f) cout<<"your key is found!!!";
	else cout<<"your key is not found!!";
	return 0;
}
