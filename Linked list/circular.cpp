#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

Node *head = NULL;
Node *last = NULL;
void insert_at_back(int val);
void insert_at_front(int val);
void delete_from_back();


void delete_from_back(){
    Node *temp = head;
    Node *newx;
    while(temp->next != NULL){
        newx = temp->next;
        temp = temp->next;
    }
    newx->next = head;
    last = newx;
}

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

void insert_at_front(int val){
    Node *temp = new Node;
    temp->data = val;
    if(head == NULL){
        head = temp;
        last = temp;
        head->next = temp;
    }
    else{
        temp->next = head;
        last->next = temp;
        head = temp;

    }
}

void insert_at_nth(){

}
int main(){
   int x;
   while(x!=7){
    cout<<"Enter 1 to insert at back"<<endl;
    cout<<"Enter 2 to insert at front"<<endl;
    cout<<"Enter 9 to show all elements"<<endl;
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
    case 2:{
    int n;
    cout<<"enter values"<<endl;
    cin>>n;
     insert_at_front(n);
        break;
    }
    case 4:{
        cout<<"back deleted"<<endl;
        delete_from_back();
    }
    case 9:{

        Node *newx = head;
        int count=0;
        cout<<"All element are "<<endl;
        while(newx->next != head){
         
            cout<<newx->data<<endl;
            newx = newx->next;
        }
        cout<<newx->data<<endl;
        
    }
    default:
        break;
    }
    }
}