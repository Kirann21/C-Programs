#include<stdio.h>
int swap(int*,int*);
int main()
{
    int n,m;
    printf("Enter two numbers\n");
    scanf("%d,%d/n",&n,&m);
    printf("Numbers before swapping..a=%d,b=%d\n",n,m);
    swap(&n,&m);
    return 0;
}
int swap(int*a,int*b)
{
 int temp;
     temp=*a;
     *a=*b;
     *b=temp;
   printf("Numbers before swapping..a=%d,b=%d\n",*a,*b);
    return 0;
}