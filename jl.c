#include<stdio.h>
#include<stdio.h>

int main()
{
    char str[20];
    int i=0;
    printf("Enter a string: ");
    gets(str);
    printf("%c", *str);
    while(str[i] !=' ')
    {
        if(str[i] == ' ')
        {
            i++;
            printf("%c", *(str + i));
        }
        i++;
    }
    return 0;
}