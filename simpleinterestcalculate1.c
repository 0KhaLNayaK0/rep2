#include <stdio.h>
int main()
{
    // This code is to calculate simple interest
    int a, c;
    float b;
    printf("Enter the principle amount \n");
    scanf("%d" , &a );
    printf("Enter the rate of interest per year \n");
    scanf("%f" , &b );
    printf("Enter the number of years \n");
    scanf("%d" , &c );
    printf("The total amount is %f " , a*(1+((b/100)*c)));
    return 0;
}