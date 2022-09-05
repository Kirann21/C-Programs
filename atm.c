#include<stdio.h>
int main()
{
    float a; float b;float sum=0.0;
    printf("Enter the amount\n");
     scanf("%f",&a);
    printf("Enter the amount to be transacted\n");
    scanf("%f",&b);
    if((int)b%5==0)
    {
    printf("Transaction is Successful");
    sum=a-b;
    printf("After transaction amt left=%f",sum);
    }
    else
    printf("Transaction not successful\n");
    return 0;
}