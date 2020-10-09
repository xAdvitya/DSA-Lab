// Pair is a class, just like dictionary in python
// pair<Type1,Type2> objectName;

#include<iostream>
// #include<utility>
using namespace std;
class student {
    private:
        string name;
        int age;
    public:
        void setStudent(string s, int a)
        {
            name=s; age=a;
        }
        void showStudent()
        {
            cout<<"\n Name: "<<name;
            cout<<"\n Age: "<<age;
        }

};


int main()
{
    pair <string, int> p1;  // p1,p2... are the object of pair class
    pair <string, string> p2;
    pair <string, float> p3;
    pair <int, student> p4; // student is class


    // insert values in pair
    p1 = make_pair("HArdik", 18);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("Pair in cpp", 345.5f); // f means flost value

    student s1;
    s1.setStudent("KumKum", 17);
    p4 = make_pair(1, s1);


    // How to access the value of these pair
    cout<<"\n Pair 1";
    cout<<"\n"<<p1.first<<" "<<p1.second;  // To print 1st and 2nd part of pair respectively
    cout<<"\n Pair 2";
    cout<<"\n"<<p2.first<<" "<<p2.second;
    cout<<"\n Pair 3";
    cout<<"\n"<<p3.first<<" "<<p3.second;
    cout<<"\n Pair 4";
    cout<<"\n"<<p4.first<<" ";
    student s2= p4.second;
    s2.showStudent();

    /* we can even compare these pairs with each other using
       these basic operators
       ==
       !=
       <,>
       <= , >=
    */



}
