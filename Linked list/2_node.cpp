#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *link;
};

int main() {
   Node *first=NULL,*second=NULL,*temp=NULL;

   first = new Node();
   second = new Node();

   first->data=10;
   first->link=second;

   second->data=20;
   second->link=NULL;

Node *n = first;



while( n->link !=NULL){
    cout<<n->data<<endl;
    n = n->link;
}
}