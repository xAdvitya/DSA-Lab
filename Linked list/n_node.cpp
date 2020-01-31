#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *link;
};

int main() {
   
   Node *temp=NULL,*head=NULL;
   int i=1;
   while(i){
       temp = new Node();
       cout<<"Enter Data Element"<<endl;
       cin>>temp->data;
       temp->lin=NULL;
       if(head ==NULL){
           head = temp;
       }
       else{
           temp->link = head;
           head = temp;
       }
        cout<<"Enter 1 if you want make new node \nelse zero\n";
        cin>>i;
   }
   head = temp;
   cout<<"Elements in the linked list are"<<endl;
   while(temp!=NULL){
       cout<<temp->data<<endl;
       temp = temp->link;
   }
   
   
}
