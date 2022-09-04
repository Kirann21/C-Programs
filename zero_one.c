#include<stdio.h>
int main()
{
    int n,o=0,z=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n&1==1)
          o++;
        else
          z++;
        n=n>>1;
    }
     printf("The no.of zeros=%d\n",z);
     printf("The no.of ones=%d\n",o);
     return 0;

     
}