// Program to search a number from array
#include <stdio.h>
int search(int arr[], int n, int x);

int main()
{
    int n, x, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be searched: ");
    scanf("%d", &x);

    int result = search(arr, n, x);
    if (result == -1)
    {
        printf("Element %d not present in array", x);
    }
    else
    {
        printf("Element %d present at position %d", x, result + 1);
    }
    return 0;
}

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
