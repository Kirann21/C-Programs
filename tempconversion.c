#include<stdio.h>
int main()
{
    float cel,far ;
    printf("Enter temperature in celsius");
    scanf("%f",&cel);
    far= ((cel*9)/5)+32;
    printf("The temperature in farenheit = %f",far);
    return 0;
}