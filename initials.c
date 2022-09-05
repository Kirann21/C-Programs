#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i=0;
    int j=0;
    printf("Enter a string:\n");
     gets(str);
    int k = strlen(str);
   printf("%c.",str[0]);
    while(i <= k)
    {
        if(str[i] == ' ')
         printf("%c.",str[i+1]);
         i++;
    }
}