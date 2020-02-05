#include <iostream>
int main()
{
    int n, m, row = 0;

    std::cout << "Enter number of rows\n";
    std::cin >> n;
    std::cout << "Enter number of columns\n";
    std::cin >> m;
    int column[m];
    int arr1[n][m];

    for(int i=0;i<m;i++){
        column[i]=0;
     }
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter elements for " << i + 1 << " row" << std::endl;

        for (int j = 0; j < m; j++)
        {
            std::cin >> arr1[i][j];
        }
    }
    std::cout << "array elements with their row and column sum\n";
    int k=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            column[k] += arr1[j][i];
        }
        k++;
        }
        
       for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < m; j++)
        {
            std::cout << arr1[i][j]<<" ";
            row += arr1[i][j];
        }
         std::cout<<" "<<row<<std::endl;
         row=0;
    }

    for(int i=0;i<m;i++){
        std::cout<<column[i]<<" ";
    }
}
