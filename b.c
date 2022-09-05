#include<stdio.h>
#include<string.h>
int main()
{
 int k;
char str [100];
printf("Enter a sentence :\n");
scanf("%[^\n]s",str);
k = strlen(str);
int sum = 0 , sum1 = 0;
for ( int i = 0 ; i < k ; i++)
{
    if(str[i] >= '0' && str[i] <= '9')
    {
    sum = sum + (str[i]-'0');
    }
    sum1 = sum1 + str[i];
}
printf("Sum of digit in string = %d\n",sum);
printf("Sum of ASCII values of charac. in string = %d",sum1);
}