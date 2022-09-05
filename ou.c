#include<stdio.h>
int main()
{
int k=0, m=0,l;
char str [100];
printf("Enter a sentence :\n");
scanf("%[^\n]s",str);
printf("Enter a position :\n");
scanf("%d",&k);
printf("Enter no.of characters :\n");
scanf("%d",&m);
for(int i = k-1 ; i < k+m-1 ; i++)
{
    printf("%c",str[i]);
}
}