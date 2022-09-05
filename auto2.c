#include<stdio.h>
int main()
{
    int n,n1=0,s=10,r=0,sq=0,f=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    n1=n;
    sq = n * n;
    while(n>0)
    {
    if(n%10!=sq%10)
    {
     printf("number is not automorphic");
     }
     n/=10;
     sq/=10;
     }
     if(n==0)
     printf("number is automorphic");
     return 0;
     }