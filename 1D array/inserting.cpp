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
    std::cout << "Enter number\n";
    std::cin >> num;

    for (int i = n; i > p - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p - 1] = num;
    std::cout << "New Array elements\n";
    for (int i = 0; i < n + 1; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}