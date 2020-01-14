#include <iostream>

int main()
{
    printf("Merging of arrays\n");

    int i = 0, j = 0;
    int a1, a2;

    printf("Enter the size of the first array\n");
    scanf("%d", &a1);

    int arr1[a1];

    printf("Enter array elements\n");
    for (int i = 0; i < a1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array\n");
    scanf("%d", &a2);

    int arr2[a2];

    printf("Enter array elements\n");
    for (int i = 0; i < a2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr[a1 + a2];

    int p = 0;
    for (; i < a1;)
    {

        arr[p++] = arr1[i++];
    }

    for (; j < a2;)
    {

        arr[p++] = arr2[j++];
    }

    for (int i = 0; i < a1 + a2; i++)
    {
        printf("%d ", arr[i]);
    }
}