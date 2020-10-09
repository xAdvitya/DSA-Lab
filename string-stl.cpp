#include<iostream>
#include<string>   // string.h is used in C, with functions like strcpy(),,strcmp()...
using namespace std;

int main()
{
   //char s1[10]="Hello";
        // normal c++ operators are not valid in char array
        // because char-array is not a data type
                // strcpy(),,strcmp()...
        // string class is also is there
        // string is safe than char array,as illegal value array can be there


    string s1;      // string()
    string s2="Hello";      //string(const char*str)
        // construction is called and hello is passed as argument
    string s3= string("Hello");

    string s4(s3); // s4=s3 //string(const &str)

    // in string we can use all type of operators
    // +,-,<<,>>

    // we can do

    cout<<"Enter your name";
    string name;
    cin>>name;
    cout<<"hello," <<name<<"!"<<endl;

    char str[]="HOw are you doing,";
    string s5 = str + name + "!";
    cout<<s5<<endl;

    string s6;
    s6.assign("hello");
    s6.append(", Student ");
    s6.insert(5," GM ");
    cout<<s6<<endl;
    s6.replace(5,7," Lets do do it ");
    cout<<s6<<endl;
    //s6.erase();
    cout<<s6.find("do")<<endl;
            // if present then index if not then -1
    cout<<s6.rfind("do")<<endl;
            // reverse find find from the last
    cout<< s6.compare(s5);
            // if same then 0 if not then 1,-1 (difference is -ve or +ve)

//  s6.c_str() will convert string into char array
    cout<<s6.size();

}
