#include<stdio.h>
#include<string.h>
int main()
{
 int k;
char str [100];
printf("Enter a sentence :\n");
scanf("%[^\n]s",str);
k = strlen(str);
int m = 0 , sum1 = 0;
for ( int i = 0 ; i < k ; i++)
{ 
printf("%c\n",str[i]);
}
}
