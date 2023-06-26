#include<stdio.h>

int main() {
    int unit;
    printf("Enter the units consumed: ");
    scanf("%d", &unit);

    if(unit >= 0 && unit <= 50){
        printf("Bill = %d\n", unit * 0.50);
    }
    else if (unit > 50 && unit <=150)
    {
        printf("Bill = %d\n", unit * 0.75);
    }
    else if (unit >150 && unit <=250)
    {
        printf("Bill = %d\n", unit * 1.20);
    }
    else if (unit >250)
    {
        int bill = (unit * 1.50) + ((unit * 1.50)*0.2);
        printf("Bill = %d\n", bill );
    }
    else
    {
        printf("Invalid Input\n");
    }
    
    

    return 0;
}