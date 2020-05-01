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
    cout<<"enter data // -1 for no node"<<endl;
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


int main(){

node *root = create();

}