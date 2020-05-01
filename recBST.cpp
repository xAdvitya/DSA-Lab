#include<bits/stdc++.h>
using namespace std;

struct node{
    node *leftchild;
    int data;
    node *rightchild;
};

node *root=NULL;

node* recInsert(int data,node *root){

    node *node1;
    if(root == NULL){
        node1 = new node;
        node1->data = data;
        node1->leftchild = node1->rightchild = NULL;
        return node1;
    }
    else{
        if(data > root->data){
            root->rightchild = recInsert(data,root->rightchild);
        }
        else if(data < root->data){
            root->leftchild = recInsert(data,root->leftchild);
        }
        return root;
    }

}

void inorder(node *p)
{
 if(p)
 {  
 inorder(p->leftchild);
 printf("%d ",p->data);
 inorder(p->rightchild);
 }
}


int main(){

    root =  recInsert(10,root); 
    recInsert(40,root);
    recInsert(30,root);
    recInsert(80,root);

    inorder(root);

}
