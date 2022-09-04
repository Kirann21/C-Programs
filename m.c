#include <stdio.h>
int main()
{
    int a = 12 , b = 4, *p1 = &a,*p2 = &b;
    int y = 4* - *p2/ *p1 + 10 ;
    int v = 4* - *p2;
    int g = v/ *p2 + 10;
    int f= -16/ *p1;
    printf("%d,%d,%d,%d",y,v,g,f);
} 