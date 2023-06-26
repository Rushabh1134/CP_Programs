#include <stdio.h>

int largest(int arr[], int n);

int main()
{
    int n, i, max;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number", 1 + i);
        scanf("%d", &arr[i]);
    }
    max = largest(arr, n);

    printf("The largest number is %d", max);

    return 0;
}

int largest(int arr[], int n)
{

    int i, max = arr[0];

    for (i = 0; i < n-1; i++)
    {
        if (max < arr[i + 1])
        {
            max = arr[i + 1];
        }
    }
    return max;
}
