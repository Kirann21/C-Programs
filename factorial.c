#include<stdio.h>

long int fact(int n);
int main()
{
int n;long int k=0;;

printf("Enter a number\n");

scanf("%d",&n);

k=fact(n);

printf("The factorial of the number-%ld\n",k);
}
long int fact(int n)
{
long int f=1;
 for(int i=1;i<=n;i++)
 {
     f*=i;
 }
return f;
}

