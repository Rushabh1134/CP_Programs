#include <stdio.h>
#include <math.h>

int length(int n)
{
    int len = 0;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return len;
}

int arm(int len, int n)
{
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum += pow(rem, len);
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, sum;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are: \n", n);
    for (int i = 0; i < n; i++)
    {
        sum = arm(length(i), i);
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}