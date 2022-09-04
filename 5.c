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
for(int i =0 ; i < k/2 ; i++)
{
    if(tolower(str[i])!= tolower(str[k-1-i]))
    m=1;
    break;
}
if(m)
{
 printf(" notpalindrome");
}
else
{
printf(" palindrome");
}
    }

