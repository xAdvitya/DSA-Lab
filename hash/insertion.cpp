#include<iostream>
using namespace std;
#define N 10

class Hash{
    public:
    int arr[N];
    int size;

    Hash(){
        size=0;
        for(int i=0;i<N;i++){
            arr[i]=-1;
        }
    }

    void insert(int value){
        if(size>=N){
            cout<<"full"<<endl;
            return;
        }
        int index=value%N;
        while(arr[index] != -1){
            index=(index+1)%N;
        }
        arr[index]=value;
        size++;
    }

    void display(){
        for(int i=0;i<N;i++){
            if(arr[i]!=-1){
                cout<<arr[i]<<endl;
            }
        }

    }
};

int main(){

    Hash hm;
    hm.insert(2);
    hm.insert(3);
    hm.insert(1);

    hm.display();
}