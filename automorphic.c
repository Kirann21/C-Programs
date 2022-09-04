
#include<stdio.h>
int main()
{
    int n,s=10,n1,r=0,sq=0,f=0,p=1,i;
    printf("Enter a number \n");
    scanf("%d",&n);
        sq = n * n;
        n1=n;
	while (n!=0)
	{
      r=n%10;
      f=f+1;
      n=n/10;
  }
   for(i=0;i<f;i++)
     {
      p=p*10;
     }

    if (sq%p==n1)
     printf("%d is an automorphic number",n1);
    else       
     printf("%d is not an automorphic number",n1);
     return 0;
    }
    