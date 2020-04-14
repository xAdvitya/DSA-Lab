#include<iostream>
using namespace std;

class queue{
    int size;
    int front;
    int rear;
    int *Q;
public:
   queue(int size){
        this->rear=-1;
        this->front=-1;
        this->size = size;  
        Q = new int[this->size];
    }
    void enqueue(int x);
    void deque();
    void display();
};

void queue::enqueue(int val){
    if(rear==size-1){
        cout<<"Queue is full"<<endl;
    }
    else{
        rear+=1;
        Q[rear] = val;
    }
}

void queue::deque(){
    if(rear == front){
        cout<<"Queue is empty\n";
    }
    else{
        front++;
    }
}

void queue::display(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<" ";
    }
}

int main(){
    queue q(3);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(3);
    q.deque();
    q.display();
}