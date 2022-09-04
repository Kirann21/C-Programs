#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("Enter two numbers");
    scanf("%d,%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The values of a n b after swapping=%d,%d",a,b);
}