#include <stdio.h>
int main()
{
    int m = 0, n = 0;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &b[i]);
    }
    int i = 0;
    int j = 0;
    printf("The union of the two sets: ");
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            printf(" %d ", a[i++]);
        else if (b[j] < a[i])
            printf(" %d ", b[j++]);
        else
        {
            printf(" %d ", b[j++]);
            i++;
        }
    }
} 