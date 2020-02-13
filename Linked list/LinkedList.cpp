#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *link;
};
void delete_node_last();
void delete_node_front();
void insert_at_front();
void insert_at_last();
void insert_at_nh(int n,int val);
void delete_from_nth(int n);

Node *head=NULL;

void delete_node_last(){

    Node *prev=NULL,*temp;
    temp=head;
    while (temp->link != NULL)
    {
        prev = temp;
        temp = temp->link;
    }
    prev->link = NULL;
    free(temp);
    
}

void delete_node_front(){
    Node *temp = head;
    head = head->link;
    free(temp);
}

void insert_at_front(){

        Node *temp;
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
}
void delete_from_nth(int n){
    Node *temp = head;
    if(n==1){
        temp = temp->link;
        head = temp;
    }
    else{
    for(int i=1;i<n-1;i++){
        temp = temp->link;
    }
    Node *temp2 = temp->link;
    temp->link =  temp2->link;
    free(temp2);
    
    }
}
void insert_at_last(){

Node *temp=NULL,*newx=NULL;
newx = new Node;
cout<<"Enter element"<<endl;
cin>>newx->data;
newx->link = NULL;

if(head == NULL){
head = newx;
}
else{
temp =head;
while(temp->link != NULL){
    temp = temp->link;
}
temp->link = newx;
}
}

void insert_at_nh(int n,int val){
    Node *temp = new Node;
    temp->data = val;
    temp ->link = NULL;
    if(n==1){
        temp->link = head;
        head = temp;
        return;
    }

    Node *temp2 = head;  
    for(int i=1;i<n-1;i++){
            temp2 = temp->link;
            }
        temp->link = temp2->link;
        temp2->link = temp;
    }
int main() {
    int n=1;
    
    while(n!=7){
    
        cout<<"Enter 1 to insert an element at front"<<endl;
        cout<<"Enter 2 to insert an element at back"<<endl;
        cout<<"Enter 3 to delete a node from nth position"<<endl;
        cout<<"Enter 4 to show all element"<<endl;
        cout<<"Enter 5 to delete an element from the last"<<endl;
        cout<<"Enter 6 to delete an element from the front"<<endl;
        cout<<"Enter 7 to stop"<<endl;
        cin>>n;

        switch(n){

            case 1:{
                insert_at_front();
                break;
                }
            case 2:{
           insert_at_last();
           break;
           }
    case 3:{
        int x,n;
        cout<<"enter position to enter value"<<endl;
        cin>>x;
        cout<<"enter value"<<endl;
        cin>>n;
        insert_at_nh(x,n);
        break;
    }
        case 4:{
            Node *temp;
    temp = head;
    cout<<"data elements are "<<endl;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->link;
    }
    break;
    }
    case 5:{

        delete_node_last();
        break;
    }
    case 6:{
        delete_node_front();
        break;
      }
      case 8:{
        delete_from_nth(3);
      }
    
        }
}
}

