#include<stdio.h>
int main()
{
int k=0, m=0,l;
char str [100];
printf("Enter a sentence :\n");
scanf("%[^\n]s",str);
for(int i = 0; str[i]!='/0';i++)
{
 if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
    printf("%c",str[i]);
    
}
}
