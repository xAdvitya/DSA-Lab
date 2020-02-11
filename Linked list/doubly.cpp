#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head=NULL;
void insert_node_at_front();
void insert_node_at_back();

void insert_node_at_front(){
    Node *temp = new Node;
    cout<<"Enter data value "<<endl;
    cin>>temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = temp;
        }
    else{
    temp->next = head;
    head->prev = temp;
    head = temp;
            }   
    }

void insert_node_at_back(){
    Node *temp = new Node;
    cout<<"Enter data value "<<endl;
    cin>>temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
    head = temp;
    }
    else{
        Node *newx = head;
        while(newx->next != NULL){
            newx = newx->next;
        }
         newx->next = temp;
    }
    
}

int main(){
    int n=3;
    
    while(n!=10){
cin>>n;
switch(n){
case 1:{
insert_node_at_front();
break;
}
case 2:{
    insert_node_at_back();
    break;
}

case 3:{
    Node *temp = head;
cout<<"all the values in doubly "<<endl;
while(temp != NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
}
break;
}
    }
    
    }


}