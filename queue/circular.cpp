#include<bits/stdc++.h>
using namespace std;

class circularQueue{

    int f;//front
    int r;//rear
    int s;//back
    int *Q; 
    public:
    circularQueue(int size){
        this->f=0;
        this->r=0;
        this->s = size;
        Q = new int[this->s];
    }

    void enqueue(int val);
    void deque();
    void display();
};

void circularQueue :: enqueue(int val){

    if((r+1)%s == f){
        cout<<"Queue is full\n";
    }
    else{
        r = (r+1) % s;
        Q[r] = val;
    }

}

void circularQueue :: deque(){
    
    if(f == r){
        cout<<"Queue is empty\n";
    }
    else{
        f = (f+1)%s;
        cout<<"DELETED element "<<Q[f]<<"\n";
    }
}

void circularQueue::display(){
    if(f == r){
        cout<<"Queue is empty\n";
    }
    else{
    int i = f;
    do{
        i = (i+1)%s;
        cout<<Q[i]<<" "; 
    }while(i != r);
        }
}

int main(){
    circularQueue q(4);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.deque();
    q.enqueue(3);
    q.display();
}