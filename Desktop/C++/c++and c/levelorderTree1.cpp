#include<iostream>
#include<queue>
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

//Node* insertNode(Node* root,int d){
//	if(root==NULL){
//		Node* temp=new Node(d);
//		return temp;
//	}
//	if(root->data > d) return root->left=insertNode(root->left,d);
//	if(root->data < d) return root->right=insertNode(root->right,d);
//	return root;
//}

Node* insertNode(Node* root, int d) {
    if (root == NULL) {
        Node* temp = new Node(d);
        return temp;
    }

    if (root->data > d) {
        root->left = insertNode(root->left, d);
        return root;  // Return updated root pointer
    }
    if (root->data < d) {
        root->right = insertNode(root->right, d);
        return root;  // Return updated root pointer
    }

    return root;
}

void levelorder(Node* root){
	if(root==NULL) return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		int currlevel=q.size();
		while(currlevel--){
			Node* currNode=q.front();
			q.pop();
			if(currNode->left){
				q.push(currNode->left);
			}
			if(currNode->right){
				q.push(currNode->right);
			}
			cout<<currNode->data<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	BST b;
	int data;
	
	for(int i=0;i<n;i++){
		cin>>data;
		b.root=insertNode(b.root,data);	
	}
	levelorder(b.root);
	return 0;
}
