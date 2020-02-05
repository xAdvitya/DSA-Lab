#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *link;
};

int main() {
    Node *temp=NULL,*head=NULL;
    int n=1;
    while(n){
        
        temp = new Node();
        temp->link = NULL;
        cout<<"Enter element"<<endl;
        cin>>temp->data;

        if(head == NULL){
            head = temp;
        }
        else{
            temp->link = head;
            head = temp;
        }
        cout<<"Enter 0 to terminate and 1 to add more elements"<<endl;
        cin>>n;
    }
    temp = head;
    cout<<"data elements are "<<endl;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->link;
    }
}

