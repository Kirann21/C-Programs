#include<stdio.h>
int main()
{
    int c[]={2,3,4,5,6,7,8,9,10,11};
    /*int j ,*p=c , *q = c;
    for(j=0;j<5;j++)
    {
    printf("%d",*c);
    ++q;
}  
for (j = 0 ; j < 5; j++)
{
    printf("%d",*p);
    ++p;
}
}*/
int *p = c+1;
int *k = c+6;
printf("\n%d",*k);
printf("\n%d",*p);
printf("\n%d",k-p);
}