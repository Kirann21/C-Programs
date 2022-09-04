#include<stdio.h>
int x=5,y=5,z=1;
void main()
{
    int v = x && y;
    int b= !y;
    printf("%d\n",v);
    printf("%d\n",b);
    if( x && y)
    {
        if(!y)
        {
         z=0;
         printf("%dfirst\n",z);
    }
    else
     y=1;
     printf("%dsecond\n",y);
}
printf("%dthird\n",z);
}       