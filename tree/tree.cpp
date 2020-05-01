#include<bits/stdc++.h>
using namespace std;
struct node{
    node *leftchild;
    int data;
    node *rightchild;
};

node* create(){
    node *newnode = new node;
    int data;
    cout<<"enter data or -1 for no node"<<endl;
    cin>>data;
    
    if(data == -1){
        return NULL;
    }
    else{
        newnode->data = data;
        cout<<"Enter left child of "<<data<<endl;
        newnode->leftchild = create();

        cout<<"Enter right child of "<<data<<endl;
        newnode->rightchild = create();

        return newnode;
    }
}

void preorder(node *root){
    if(root){
    cout<<root->data<<" ";
    preorder(root->leftchild);
    preorder(root->rightchild);
    }
}

void inorder(node *root){
    if(root){
    inorder(root->leftchild);
    cout<<root->data<<" ";
    inorder(root->rightchild);
    }
}

void postorder(node *root){
    if(root){
    postorder(root->leftchild);
    postorder(root->rightchild);
    cout<<root->data<<" ";
    }
}

int main(){

cout<<"creating tree\n";
node *root = create();

cout<<"\npreorder traversal "<<endl;
preorder(root);

cout<<"\ninorder traversal "<<endl;
inorder(root);

cout<<"\npostorder traversal "<<endl;
postorder(root);
}