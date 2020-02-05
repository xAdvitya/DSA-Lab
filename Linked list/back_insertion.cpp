#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *link = NULL;
};

int main(){
Node *head=NULL,*tail,*temp;

int n=1;

while(n){
temp = new Node();
cout<<"Enter elements in linked list"<<endl;
cin>>temp->data;

if(head==NULL){
    head = temp;
    tail = temp;
}
else{
    tail->link = temp;
    tail = temp; 
}
cout<<"Enter 1 to continue and 0 to stop"<<endl;
cin>>n;
    }
    temp = head;
    cout<<"All elements are "<<endl;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->link;
    }
    
}