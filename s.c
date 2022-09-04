#include<stdio.h>
void mathi( int a,int b, int *sum , int *diff)
{
    *sum = a+b;
    *diff = a-b;
}
main()
{
    int x = 20 , y = 10 , s , d;
    mathi(x,y, &s,&d);
    printf("s =  %d\n d = %d\n",s,d);
}