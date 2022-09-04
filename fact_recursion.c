#include<stdio.h>
int fact (int n)
{   

    if(n!=0)
    {
        return  n*fact(n-1); 
    }
    else
    return 1;
}
int main()
{
    int n, j=0;
    printf("Enter a number : ");
    scanf("%d",&n);
     j = fact(n);
     printf("The factorial of %d = %d",n,j);
}