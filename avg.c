#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the length of array:");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    float avg = sum / n;

    printf("The average is %d", avg);

    return 0;
}