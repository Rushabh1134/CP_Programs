#include<stdio.h>

int printFib(int n){
    
    static int a = 0, b = 1, nextTerm;    
    if(n > 0)
    {    
        nextTerm = a + b;    
        a = b;    
        b = nextTerm;    
    
        printf("%d, ",nextTerm);
        printFib(n-1);    
    }
    
}

int main()
{
    int n = 10;
    
    printf("0, 1, ");
    
    // n-2 as 2 terms already printed
    printFib(n-2);

    return 0;
}