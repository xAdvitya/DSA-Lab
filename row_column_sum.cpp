#include <iostream>
int main()
{
    int n, m, row = 0, column = 0;

    std::cout << "Enter number of rows\n";
    std::cin >> n;
    std::cout << "Enter number of columns\n";
    std::cin >> m;

    int arr1[n][m];

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter elements for " << i + 1 << " row" << std::endl;

        for (int j = 0; j < m; j++)
        {

            std::cin >> arr1[i][j];
        }
    }
    std::cout << "array elements are\n";

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            std::cout << arr1[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            row += arr1[i][j];
        }
        std::cout << "row " << i + 1 << " sum =" << row << std::endl;
        row = 0;
    }
    std::cout << std::endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            column += arr1[j][i];
        }
        std::cout << "column " << i + 1 << " sum = " << column << std::endl;
        column = 0;
    }
}
