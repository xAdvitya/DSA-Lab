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


void inorderSucessor(node *root,int query){

    node *curr = recSearch(query,root);

    if(curr->rightchild != NULL){
        node *right = curr->rightchild;

        while(right->leftchild != NULL){
            right = right->leftchild;
        }

        cout<<"Inorder sucessor is "<<right->data<<endl;
    }
    else{
        node *anscestor = root;
        node *sucessor = NULL;

        while(anscestor != curr){
            if(curr->data < anscestor->data){
                sucessor = anscestor;
                anscestor = anscestor->leftchild;
            }
            else{
                anscestor = anscestor->rightchild;
            }
        }
        cout<<"Inorder sucessor is "<<sucessor->data<<endl;
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

    root =  recInsert(15,root); 
    recInsert(10,root);
    recInsert(20,root);
    recInsert(8,root);
    recInsert(12,root);

    inorderSucessor(root,12);

    inorder(root);
    
}
