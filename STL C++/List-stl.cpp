#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1{11,22,33}; // list <int> l1 , empty list
    list <string> l2 {"hardik", "Kum kum", "Nishant"};

    list <int>::iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<"\n";
    cout<<"Tota value in list are "<<l1.size()<<"\n";;

    l1.push_back(44);
    l1.push_front(55);
    list <int>::iterator q=l1.begin();
    while(q!=l1.end()){
        cout<<*q<<" ";
        q++;
    }
    cout<<"\n";

    l1.pop_back();
    l1.pop_front();
    list <int>::iterator r=l1.begin();
    while(r!=l1.end()){
        cout<<*r<<" ";
        r++;
    }
    cout<<"\n";

    list <int> l3{1,22,3,2,88,69,11};
    list <int>::iterator a=l3.begin();
    while(a!=l3.end()){
        cout<<*a<<" ";
        a++;
    }
    l3.sort();// sort in ascending order
    l3.reverse();// Reverse the sequence

    l3.remove(22); // remove perticular value by passing it as argument
 // l3.clear(); // will clear whole obj
    list <int>:: iterator it= l3.begin();
    while(it!=l3.end()){
        cout<<*it<<" ";
        it++;
    }

}
