#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i=0;
    int j=0;
    printf("Enter a string:\n ");
     gets(str);
    int k = strlen(str);
    printf("%d\n",k);
    while(i <= k+1)
    {
        if(str[i] == 's' || str[i] == 'S')
         j++;
         i++;
    }
    printf("No.of 'S' in the string = %d",j);
}     