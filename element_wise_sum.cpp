#include <iostream>

int main()
{
    int r, c;

    std::cout << "Enter number of rows and columns of  matrix " << std::endl;
    std::cin >> r >> c;
    int arr[r][c];
    int arr1[r][c];

    std::cout << "Enter elements of first matrix" << std::endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    std::cout << "Enter elements of second matrix" << std::endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cin >> arr1[i][j];
        }
    }
    std::cout << "Elements of first matrix are " << std::endl;

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

    std::cout << "Elements of second matrix are " << std::endl;

    std::cout << "{ " << std::endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout << arr1[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << " }" << std::endl;

    std::cout << "Element wise sum of matrix is" << std::endl;

    std::cout << "{ " << std::endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout << arr[i][j] + arr1[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << " }" << std::endl;
}
