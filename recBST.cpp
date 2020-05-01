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

node* recSearch(int query,node *node1){
    if(node1 == NULL){
        cout<<"\nnot found\n";
        return NULL;
    }
    else{
        if(node1->data == query){
            cout<<"\nfound\n";
            return node1;
        }
        else if(query < node1->data){
            return recSearch(query,node1->leftchild);
        }
        else{
            return recSearch(query,node1->rightchild);
        }
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

    node *node1 = root;

    recSearch(30,node1);
    recSearch(50,node1);
    recSearch(40,node1);
    
}
