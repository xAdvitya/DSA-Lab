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
void delete_from_nth(int n);
void delete_from_front();

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

void delete_from_front(){

    Node *newx = head;
    newx = newx->next;
    head = newx;
}

void delete_from_back(){
Node *newx = head;
Node *temp = head;
    while(temp->next != NULL){
        newx = temp;
        temp = temp->next;
    }
    newx->next = NULL;
    
}

void delete_from_nth(int n){
    Node *temp = head;
    if(n==1){
        temp = temp->next;
        head = temp;
    }
    else{
    
    for(int i=1;i<n-1;i++){
        temp = temp->next;
        }
        Node *temp2 = temp->next;
    temp->next =  temp2->next;
    free(temp2);
    
    }
}

int main(){
    int n=3;

    while(n!=10){
    cout<<"enter 1 to insert at front"<<endl;
    cout<<"enter 2 to insert at back"<<endl;
    cout<<"enter 3 to insert at nth position"<<endl;
    cout<<"enter 4 to delete from front"<<endl;
    cout<<"enter 5 to delete from back"<<endl;
    cout<<"enter 6 to delete from nth position"<<endl;
    cout<<"enter 9 to view all elements"<<endl;
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
case 4:{
     delete_from_front();
     break;
}
case 5:{
    delete_from_back();
    break;
}
case 6:{
    int n;
    cout<<"Enter position from where you want to delete"<<endl;
    cin>>n;
    delete_from_nth(n);
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