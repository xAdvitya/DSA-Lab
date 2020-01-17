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
    std::cout << "Enter position where you want to delete an element\n";
    std::cin >> p;

    for (int i = p - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    std::cout << "New Array elements\n";
    for (int i = 0; i < n - 1; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}
