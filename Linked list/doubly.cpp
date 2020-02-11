/*

nightly build

*/

//////////////////////////////////

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
void insert_at_nth();

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

void insert_at_nth(){
   Node *temp = new Node;
   int n;
    cout<<"Enter data value "<<endl;
    cin>>temp->data;
    temp->next = NULL;
    temp->prev = NULL;
    cout<<"enter position "<<endl;
    cin>>n;
    if(head==NULL){
        head = temp;
    }
    else{
        if(n==1){
            temp->next = head;
            head = temp;
        }
        else{
            Node *newx = head; 
            for(int i=1;i<n-1;i++){
                newx = newx->next;
            }
            temp->prev = newx;
            temp->next = newx->next;
            newx->next = temp;
            
        }

    }

}


int main(){
    int n=3;
    cout<<"enter 1 to insert at front"<<endl;
    cout<<"enter 2 to insert at back"<<endl;
    cout<<"enter 3 to insert at nth position"<<endl;
    cout<<"enter 9 to view all elements"<<endl;
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
    insert_at_nth();
    break;
}

case 9:{
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