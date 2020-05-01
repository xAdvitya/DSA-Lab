#include<bits/stdc++.h>
using namespace std;

class treeNode{
    public:
    treeNode *lchild;
    int data;
    treeNode *rchild;
};

class circularQueue{

    int f;//front
    int r;//rear
    int s;//back
    treeNode **Q; 
    public:
    circularQueue(int size){
        this->f=0;
        this->r=0;
        this->s = size;
        Q = new treeNode;
    }

    void enqueue(treeNode *val);
    treeNode* deque();
    int isEmpty();
};

void circularQueue :: enqueue(treeNode *val){

    if((r+1)%s == f){
        cout<<"Queue is full\n";
    }
    else{
        r = (r+1) % s;
        Q[r] = val;
    }

}

treeNode* circularQueue :: deque(){
    
    treeNode *x = NULL;

    if(f == r){
        cout<<"Queue is empty\n";
    }
    else{
        f = (f+1)%s;
        x = Q[f];
    }
    return x;
}

int circularQueue::isEmpty(){
    return f==r;
}
