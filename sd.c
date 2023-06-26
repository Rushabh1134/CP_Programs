#include<stdio.h>
#include<math.h>


int main() {
    int n, i, sum=0;
    
    float avg, sum1=0.00;

    printf("Enter the value of n");
    scanf("%d",&n);
    int arr[n];

    for(i =0; i<n; i++) {
        printf("Enter value at %d: ",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    avg = sum;
    avg = avg/n;

    for(i =0; i<n; i++){
        sum1 = sum1 + pow(arr[i]-avg,2);
    }
    float sd = sqrt(sum1/n);
    printf("The sd is %f", sd);
}