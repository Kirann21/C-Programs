#include<stdio.h>
int prime(int);
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
     if(n%i==0)
       {
           if(prime(i))
              printf("%d\n",i);
       }
    }
     printf("These are the prime factors of %d",n);
        
    return 0;
}
int prime(int n)
{
    int i, f = 1;
    for (i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            f = 0;
            break;
        }
    }
    if(f == 1)
        return 1;
    else
        return 0;
}
