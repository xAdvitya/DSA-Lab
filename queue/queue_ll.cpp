#include<bits/stdc++.h>
using namespace std;

class Queue
{
public:
int data;
Queue *next;

Queue(){
    data =0;
    next = nullptr;
    }
    void enqueue(int val);
    void display();
    void deque();
};

Queue *head,*tail;

void Queue::enqueue(int val){
    Queue *temp = new Queue();
    temp->data = val;
    if(head == nullptr){
      tail = head = temp;
    }
    else
    {  
     tail->next = temp;
     tail = temp;
    }  
}

void Queue::display(){
    
    Queue *x = head;
   
    while(x != nullptr){
        cout<<x->data<<" ";
        x = x->next;
    }
}

void Queue::deque(){

    if(head == nullptr){
        cout<<"Queue is already empty bro !!\n";
    }
    else
    {
    Queue *temp = head;
    head = head->next;
    delete temp;   
    }
}

int main(int argc, const char** argv) {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    
    //q.deque();
    q.deque();

    q.display();

    return 0;
}