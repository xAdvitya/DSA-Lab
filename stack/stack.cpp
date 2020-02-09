#include <bits/stdc++.h>
using namespace std;
int main()
{
    int stack[100];
    int n;
    cout<<"enter the size of stack";
    cin>>n;
    int choice = 0,val;
    while(choice != 4){
        cout<<"Enter your choice "<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter value to enter in the stack";
                cin>>val;
                push(val);
            }
            case 2:{
                pop();
            }
            case 3:{
                show();
            }
            case 4:{
                cout<<"program ended"<<endl;
            }
            default:{
                cout<<"Enter valid choice bro !"<<endl;
            }
        }
    }


}
