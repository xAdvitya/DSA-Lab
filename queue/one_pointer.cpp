#include<iostream>
using namespace std;
int cs=-1;

void insert(int que[] ,int size);
void print(int que[] ,int size);

void insert(int que[] ,int size){
    if(cs<size){
        cs++;
        cout<<"enter number ";
        int x;
        cin>>x;
        que[cs] = x;
    }
    else{
        cout<<"full"<<endl;
    }
}

void print(int que[] ,int size){
    for(int i=0;i<size;i++){
        cout<<que[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cin>>size;
    int queue[size];
    int num;
while(true){
    cout<<"Enter 1 to enter a number"<<endl;
    cout<<"Enter 2 to print the queue"<<endl;
    cin>>num;
    switch (num)
{
    case 1:{
        insert(queue,size);
        break;
        }

    case 2:{
        print(queue,size);
        break;
        }

    default:{
        break;
        }
}

    }

}