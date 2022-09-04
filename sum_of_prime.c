#include<stdio.h>
int prime(int n)
{ 
    int isprime = 1;
    for(int i=2 ; i <=n/2 ; i++)
    {
        if(n%i == 0)
        {
        isprime = 0;
        break;
    }
    }
    return isprime;
}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);
int f =0;
for(int i = 2 ; i <= n/2 ; i++)
{
    if(prime(i)==1)
{
    if(prime(n-i)==1)
{
    printf("%d = %d + %d\n",n,i,n-i);
    f=1;
}
}
}

    if(f==0)
    printf("The number cant be expressed as sum of prime");
}


