#include<stdio.h>
int sum (int *n , int m)
{
    int u = 0;
    for (int i = 0 ; i < m ; i++)
    {
    u = u + *(n+i);
    }
    return u;
}
int main()
{
    int n ;
    printf("Enter the no.of elements :\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values :\n");
     int s = 0;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    s = sum(&a[0],n);
    printf("The sum of all the elements :%d\n",s);
}