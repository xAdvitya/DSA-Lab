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
    vector <int> v1 {10,20,30,40,50};
        // Size of vector doubles wrt the current capacity
    vector <char> v2(4);
        // 4 is size of 4 chhar block
    vector <int> v3(5, 10);
        // vector of size 5, each block having value 10
    // all realtional operators work in vector
    // [] square brackets is know as subscript operator

    vector <string> v4(4, "Hello");
    cout<<v4[0]<<endl;    // also v4.at(0)
    cout<<v4[1]<<endl;
    cout<<v4[2]<<endl;
    cout<<"USING FOR LOOP";
    for (int i=0;i<=3; i++)
        cout<<v4[i]<<endl;


    cout<<"Starting size"<<v1.capacity()<<endl; // capacity of vector
    v1.push_back(60);
            // To insert element at last
    for (int i=0;i<v1.capacity(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    cout<<" capacity after adding 1 ele "<<v1.capacity()<<endl;

    v1.pop_back();
            // To remove element from last
    for (int i=0;i<v1.capacity(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    cout<<" capacity after poping last ele "<<v1.capacity()<<endl;
            // pop() never reduces size or capacity of vector
            // means once increase it cant be decreases

    cout<<"Total no of elements"<<v1.size();
            // it will print the no of elements i vector
            // can be used in for loop

    //v1.clear();
            // remove every element, means size=0 and capacity will not change

    cout<<"1st element of v4 is"<<v4.front()<<endl;
    cout<<"Last elemnt of v4 is "<<v4.back()<<endl;
            // To get 1st and last value of vector


    //to insert element in btw the vector we use iterators
    for (int i=0;i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<"\n\n";
    vector <int>:: iterator it=v1.begin();
            // it object of class iterator
            // it iterator is now pointing at the stating position of vector
    v1.insert(it+3,35);
            // this will add 35 after the 3rd element element
    v1.insert(it,0);
            // this add 0 at the begining
    for (int i=0;i<v1.size(); i++)
        cout<<v1[i]<<" ";

}
