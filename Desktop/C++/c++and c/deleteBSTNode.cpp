#include<iostream>
#include<vector>
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

Node* insertBST(Node* root,int d){
	if(root==NULL){
		Node* temp=new Node(d);
		return temp;
	}
	if(root->data > d){
		root->left=insertBST(root->left,d);
	}
	if(root->data < d){
		root->right=insertBST(root->right,d);
	}
	return root;
}


void inorder(Node* root,vector<int> &v){
	if(root==NULL) return;
	inorder(root->left,v);
	v.push_back(root->data);
	inorder(root->right,v);
	return;
}

void inorderPrint(Node* root){
	if(root==NULL) return;
	cout<<root->data<<" ";      //preorder.....................
	inorderPrint(root->left);
//	cout<<root->data<<" ";       //Inorder.....................
	inorderPrint(root->right);
//	cout<<root->data<<" ";       //postorder...................
	return;
}

void makeAVL(Node* &root,vector<int> v,int f,int l){
	if(f>=l) return;
	int mid=(f+l)/2;
	root=insertBST(root,v[mid]);
	makeAVL(root,v,f,mid);
	makeAVL(root,v,mid+1,l);
}


Node* largestNodeBST(Node* root){
	Node* curr=root;
	while(curr && curr->right){
		curr=curr->right;
	}
	return curr;
}




Node* deleteNode(Node* root,int key){
	if(root==NULL) return NULL;
	if(root->data > key){
		root->left=deleteNode(root->left,key);
	}
	else if(root->data < key){
		root->right=deleteNode(root->right,key);
	}
	else{
		if(root->left==NULL && root->right==NULL){
			free(root);
			return NULL;
		}
		else if(root->left==NULL){
			Node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL){
			Node* temp=root->left;
			free(root);
			return temp;
		}
		//root has two child............
		else{
			Node* justSmallerval=largestNodeBST(root->right);
			root->data=justSmallerval->data;
			root->left=deleteNode(root->left,justSmallerval);
		}
	}
	return root;
}


int main(){
	BST b;
	int n;
	cin>>n;
	int data;
	for(int i=0;i<n;i++){
		cin>>data;
		b.root=insertBST(b.root,data);
	}
	vector<int> v;
	inorder(b.root,v);
	int size=v.size();
	BST avl;
	makeAVL(avl.root,v,0,size);
	inorderPrint(avl.root);
	
	return 0;
}
