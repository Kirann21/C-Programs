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
     f=1;
     }
     n/=10;
     sq/=10;
     }
     if(f!=1)
     printf("number is automorphic");
     else 
     printf("number is not automorphic");
     return 0;
     }