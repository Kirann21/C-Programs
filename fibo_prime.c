#include <stdio.h>
int fibo()
{
    static int n1 = 0, n2 = 1, n3 = 0;
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    return n3;
}
int prime()
{
    static int a = 2;
    int e = 0;
    int c = 0;
    while(1)
    {
        c = 0;
        for (int i = 1; i <= a/2; i++)
        {
            if(a%i == 0)
                c++;
        }
        if(c != 1)
            a++;
        else 
            break;
    }
    if(c == 1)
        e = a;
    a++;
    return e;
}
int main()
{
     int n = 0;
    printf("Enter the size: ");
    scanf("%d",&n);
    int ar[n];
    for (int i = 1; i < n; i++)
    {
        if(i%2 == 0)
            ar[i] = prime();
        else
            ar[i] = fibo();
    }
    printf("The resultant array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}