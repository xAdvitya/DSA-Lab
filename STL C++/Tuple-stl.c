// tuple is template class used when
// we want to combine data of
// different types same as in python



#include<iostream>
#include<tuple>
using namespace std;


int main()
{
    tuple <string, int, int> t1; // t1 is object of class tuple
    t1= make_tuple("Hardik",18,11901720);
            // to define the tuple

    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<" ";
            // how to fetch the values from tuple
            // we can use all comparison operators to compare two tuples

}
