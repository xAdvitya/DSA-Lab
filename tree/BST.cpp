#include<bits/stdc++.h>
using namespace std;

struct node{
    node *leftchild;
    int data;
    node *rightchild;
};

node *root=NULL;

void insert(int data){
    node *node1=NULL,*node2=NULL,*node3=NULL;

    if(root == NULL){
        node1 = new node;
        node1->leftchild=node1->rightchild = NULL;
        node1->data = data;
        root = node1;
        return ;
    }
    node1 = root;

    while(node1 != NULL){
        node2 = node1;
        if(data > node1->data){
            node1 = node1->rightchild;
        }
        else if(data < node1->data){
            node1 = node1->leftchild;
        }
        else{
            return ;
        }
    }
    node3 = new node;
    node3->data = data;
    node3->leftchild=node3->rightchild = NULL;

    if(data>node2->data){
        node2->rightchild = node3;
    }
    else{
        node2->leftchild = node3;
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

    insert(10); 
    insert(40);
    insert(30);
    insert(80);

    inorder(root);

}
