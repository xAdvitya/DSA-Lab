#include <iostream>

using namespace std;

int arr[10000];

void enter_elements()
{
    // int n;
    // cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
}

void print_all()
{

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}

void delete_num()
{
    int x;
    cin >> x;
    if (x > 5)
    {
        cout << "not possible";
    }
    else
    {
        for (int i = x; i < 5; i++)
        {
            arr[i] = arr[i + 1];
        }
        for (int i = 0; i < 5 - 1; i++)
        {
            cout << arr[i] << endl;
        }
    }
}
int main()
{
    int p;

    //  arr a;

    do
    {
        cout << "Enter 1 to insert elements into the array\n";
        cout << "Enter 2 to Print all array elements\n";
        cout << "Enter 3 to replace a array element\n";
        cin >> p;
        switch (p)
        {

        case 1:
        {
            enter_elements();
            break;
        }
        case 2:
        {
            print_all();
        }
        case 3:
        {

            delete_num();
            break;
        }
        }
    } while (p != 5);
}