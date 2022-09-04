#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("%d is the smallest number\n",a);
        if(b>c)
        printf("%d is the largest number\n",b);
        else
        printf("%d is the largest number\n",c);
    }    
    else if(b<a&&b<c)
    {
        printf("%d is the smallest number\n",b);
         if(a>c)
         printf("%d is the largest number\n",a);
         else
         printf("%d is the largest number\n",c);   
    }
    else if(c<a&&c<b)
    {
     printf("%d is the smallest number\n",c);
     if(a>b)    
     printf("%d is the largest number\n",a);
     else
     printf("%d is the largest number",b);
    }
     return 0;
 }
