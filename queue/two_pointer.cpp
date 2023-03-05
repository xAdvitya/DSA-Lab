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
        cout<<"full\n";
    }else{
        
        if(front==-1){
            front+=1;
        }
        rear+=1;
        Q[rear]=val;
    }
    
}

void queue::deque(){
    if(rear<front || rear==-1){
        cout<<"empty\n";
    }else{
        front++;
    } 
}

void queue::display(){
    if(rear<front || rear==-1){
        cout<<"empty\n";
    }else{
        for(int i=front;i<=rear;i++){
            cout<<Q[i]<<" ";
        }
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
