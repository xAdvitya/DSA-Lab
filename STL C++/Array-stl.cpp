#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 5> arrayObject={12,32,4,54,2};


    cout<<"Value at index 2: "<<arrayObject.at(2)<<endl;
        // at() prints value at given index
   //** cout<<arrayObject.at(7);
        // when value is not present then error "out of range"


    cout<<"Value at index 2: "<<arrayObject[2]<<endl;
        // without using at() function directly use [] these brackets



    cout<<"Value at 1st position: "<<arrayObject.front()<<endl;
    cout<<"Value at last position: "<<arrayObject.back()<<endl;
        // print the value which is present at 1st and last position of the array
        // if array <int, 6> object={12,34,2}
        //      then for front its value is 12 and for back its value is 0



    arrayObject.fill(10);
        // it will fill whole array with value "10"
    cout<<"Fill array with 10: ";
    for( int i=0; i<=4; i++)
        cout<<arrayObject[i]<<" ";
    cout<<endl;


    array <int, 5> arrayObject1={1,2,3,4,5};
    array <int, 5> arrayObject2={6,7,8,9,10};
    arrayObject1.swap(arrayObject2);
        // swap values of two diff array of same type and size.

    for(int i=0; i<=4; i++)
        cout<<arrayObject1[i];
    cout<<endl;
    for(int i=0; i<=4; i++)
        cout<<arrayObject2[i];


    cout<<"Size of array object is 1 and 2 is res: "<<arrayObject1.size()<<" "<<arrayObject2.size();
        // to get the size of the array


    // begin() and end() used in itteraters
}
