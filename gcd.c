#include <stdio.h>
#include <math.h>
unsigned int GCD(unsigned i, unsigned j);
int main()
{
    int a, b;
    printf("Enter the two integers: ");
    scanf("%d%d", &a, &b);
    printf("GCD of %d and %d is %d", a, b, GCD(a, b));
    return 0;
}
/* Recursive Function*/
unsigned int GCD(unsigned i, unsigned j)
{
    if (j == 0)
        return i;
    if (j > i)
        return GCD(j, i);
    else
        return GCD(j, i % j);
}