#include <iostream>

int main()
{
    int r, c;

    std::cout << "Enter number of rows and columns" << std::endl;
    std::cin >> r >> c;
    int arr[r][c];

    std::cout << "Enter elements" << std::endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    std::cout << "{ " << std::endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << " }" << std::endl;

    std::cout << "Transpose is :" << std::endl;

    std::cout << "{ " << std::endl;

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            std::cout << arr[j][i];
        }
        std::cout << std::endl;
    }
    std::cout << " }" << std::endl;
}