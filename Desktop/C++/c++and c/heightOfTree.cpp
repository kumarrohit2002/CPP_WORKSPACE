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

int height(Node* root){
    if(root==NULL) return 0;
    else{
    int lheight=height(root->left);
    int rheight=height(root->right);
    if(lheight > rheight ){
            return 1+lheight;
    }
    else{
        return 1+rheight;
    }
    }
}

int countleaf(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return countleaf(root->left)+countleaf(root->right);
}


void inorder(Node* root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}


int main(){
    BST b;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        b.root=insertNode(b.root,data);
    }
    cout<<"height of tree: "<<height(b.root);
    cout<<"\nCount of left is : "<<countleaf(b.root);
    cout<<endl;
    inorder(b.root);
    return 0;
}



