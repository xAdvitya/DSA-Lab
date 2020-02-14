#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

Node *head = NULL;
Node *last = NULL;
void insert_at_back(int val);

void insert_at_back(int val){
    Node *temp = new Node;
    temp->data = val;
    if(head == NULL){
    head = temp;
    last = temp;
    head->next = temp;
    }
    else{
    last->next = temp;
    last = temp;
    last->next = head;
    }
}


int main(){
   int x;
   while(x!=7){
    cout<<"Enter choice"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:{
    int n;
    cout<<"enter values"<<endl;
    cin>>n;
    insert_at_back(n);
        break;
    }
    case 9:{
        Node *newx = head;
        cout<<"All element are "<<endl;
        while(newx->next != head){
            cout<<newx->data<<endl;
            newx = newx->next;
        }

    }
    default:
        break;
    }
    }
}