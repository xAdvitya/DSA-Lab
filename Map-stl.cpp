// numeric array = indexes are of numeric type
// associative array = indexes are of not integer type but it can be of any type
// map is example of key-value pair, using associative array

/*
Customer no (key        customer name (value
    100                 Gajendra
    123                 Dilip
    145                 Hardik
    171                 Kum kum
    200                 Rajesh
*/

// Map always arrange its key sorted order
// String type keys are arrange are as dictionary oder


#include<iostream>
#include<map>
using namespace std;


int main()
{
    map <int, string> m1;

    m1[100]="Gajendra";
    m1[123]="Dilip";
    m1[145]="Hardik";
    m1[172]="Kum kum";
    m1[200]="Rajesh";
    m1.insert(pair <int, string> (22,"Yo baby")); // insert

    map <int, string> m2 { {100,"Gajendra"},{123,"Hardik"},{172,"Kum kum"}
    };

    cout<<m1[100];
    cout<<endl;

    map <int, string>::iterator p = m1.begin();
    while(p!=m1.end()){
        cout<<p->first<<" "<<p->second<<endl;
        p++;
    }

    cout<<endl;
    cout<<"size is"<<m1.size();cout<<endl;
    cout<<m1.empty(); // print 1 if empty else 0
    cout<<endl;






}
