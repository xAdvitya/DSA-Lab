// The most used container class is vector
// it supports Dynamic Array
// Dynamic array don't have limited size
// vector is dynamic array (memory flexibility)
// size increase as in ration by default 1--2--4--8--16 ...
// vector or DA is in bwn Linked list and array.
// in linked list size increses 1 by 1 and here is incses in ratio
// initial ca

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v; //empty vector
    vector <int> v1 {10,20,30.40,50};
        // Size of vector doubles wrt the current capacity
    vector <char> v2(4);
        // 4 is size of 4 chhar block
    vector <int> v3(5, 10);
        // vector of size 5, each block having value 10
    // all realtional operators work in vector
    // [] square brackets is know as subscript operator

    vector <string> v4(4, "Hello");
    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;
    cout<<v4[2]<<endl;
    cout<<"USING FOR LOOP";
    for (int i=0;i<=3; i++)
        cout<<v4[i]<<endl;


    return 0;
}
