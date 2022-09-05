#include <stdio.h>
int main()
{
    int e = 0,f = 0,n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
     int ar[n],even[n],odd[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(ar[i]%2 == 0)
        {
            even[e] = ar[i];
            e++;
        }
        else
        {
            odd[f] = ar[i];
            f++;
        }
    }
    printf("The count of even numbers found: %d.\n",e);
    printf("The count of odd numbers found: %d.\n",f);
    printf("Elements of Even array: \n");
    for (int i = 0; i < e; i++)
    {
        printf("%d\n",even[i]);
    }
    printf("Elements of Odd array: \n");
    for (int i = 0; i < f; i++)
    {
        printf("%d\n",odd[i]);
    }
    return 0;
}