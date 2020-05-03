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

int height(node *p){

    int x=0,y=0;

    if(p == NULL){
        return 0;
    }
    else{
        x = height(p->leftchild);
        y = height(p->rightchild); 
    }

    if(x>y){
        return x+1;
    }
    else{
        y+1;
    }

}

node* inSucess(node*p){
    while(p && p->leftchild != NULL){
        p = p->leftchild;
    }

    return p;
}


node* inPred(node*p){
    while(p && p->rightchild != NULL){
        p = p->rightchild;
    }
    return p;
}

node* recDelete(int query,node *p){

    node *q = NULL;

    if(p == NULL){
        return NULL;
    }

    if(p->leftchild == NULL && p->rightchild == NULL){

        if(p == root){
            root = NULL;
        }

        delete p;
        return NULL;
    }

    if(p->data > query){
        p->leftchild = recDelete(query,p->leftchild); 
    }
    else if(p->data < query){
         p->rightchild = recDelete(query,p->rightchild);
    }
    else{
        if(height(p->rightchild) > height(p->leftchild)){
            q = inSucess(p->rightchild);
            p->data = q->data;
            p->rightchild = recDelete(q->data,p->rightchild);
        }
        else{
            q = inPred(p->leftchild);
            p->data = q->data;
            p->leftchild = recDelete(q->data,p->leftchild);
        }
    }

    return p;

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

    root =  recInsert(50,root); 
    recInsert(10,root);
    recInsert(40,root);
    recInsert(20,root);
    recInsert(30,root);

    inorder(root);

    node *node1 = root;

    recSearch(30,node1);
    recSearch(50,node1);
    recSearch(40,node1);

    recDelete(50,root);
    recDelete(30,root);

    inorder(root);
    
}
