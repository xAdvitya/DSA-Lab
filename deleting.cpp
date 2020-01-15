#include <iostream>
int main()
{
    int arr[100];

    int n;
    std::cout << "Enter size of array\n";
    std::cin >> n;

    std::cout << "Enter array elements\n";

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int p, num;
    std::cout << "Enter position where you want to insert an element\n";
    std::cin >> p;
}