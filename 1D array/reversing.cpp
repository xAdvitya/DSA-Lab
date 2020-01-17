#include <bits/stdc++.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("[ ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]");
}