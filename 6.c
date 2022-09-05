#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
 int k;
char str [100];
char str1 [100];
printf("Enter a sentence :\n");
scanf("%[^\n]s",str);
k = strlen(str);
int m = 0 , sum1 = 0;
for(int i =0 ; i < k ; i++)
{
    if((str[i] == ' ')&&(str[i+1]!=' '))
    {
        m = m+1;
    }
}
   printf("No.of words =%d",m+1 );
}