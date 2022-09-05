#include<stdio.h>
#include<string.h>
int main()
{
char str [100], s[100], r[100];
printf("Enter a sentence :\n");
scanf("%[^\n]s",str);
printf("Enter the substring to be replaced :\n");
scanf("%s",s);
printf("Enter the string tht will replace the substring:\n");
scanf("%s",r);
int k = strlen(str);
int g = strlen(s);
int a = strlen(r);
for(int i = 0; i < k;i++)
{
        for( int j = 0; j < g ;j++)
        {
        if(str[i]==s[j])
        {
      for(int b = 0 ; b < a ; b++)
      {
        str[i]=r[b];
        b--;
        }
        }
        }    
    } 
     printf("%s",str); 
}