#include<stdio.h>
int main()
{
    int n,sum=0,n1=0,r=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
      r=n%10;
      sum=sum+(r*r*r);
      n=n/10;
    }
    if(sum==n1)
    printf("%d is an armstrong number",n1);
    else
    printf("%d is not an armstrong number",n1);
    return 0;
}