#include<stdio.h>
int main()
{
    int n,n1=0,s=10,r=0,sq=0,f=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    n1=n;
    while(n!=0) 	
    {
        sq = n * n;
	while (n > 0)
	{
	n=n/10;
        sq=sq/10;
        //printf("%d\n",n);
        //printf("%d\n",sq);
          if (n % 10 == sq % 10)
         f=1;
         break;
        
    }
    if(f==1)
     printf("%d is an automorphic number",n1);
    else       
     printf("%d is not an automorphic number",n1);
     return 0;
    }
    }