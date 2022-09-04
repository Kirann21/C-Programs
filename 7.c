#include<stdio.h>
#include<string.h>
#include<ctype.h>
int palin (char str [])
{
char ch[100];
int k = strlen(str);
int m = 0 ;
for(int i =0 ; i < k/2 ; i++)
{
    if(tolower(str[i])!= tolower(str[k-1-i]))
    m=1;
    break;
}
if(m)
{
 return 0 ;
}
else
{
return 1;;
}
 }




int main()
{
    int k=0, m=0,l;
char str [100];
printf("Enter a sentence :\n");
scanf("%[^\n]s",str);
for(int i = 0 ; i < strlen(str); i++)
{
if(str[i]==' ')
{
if(palin(str)==1)
m++;
}
} 
printf("no.of palindromes = %d",m);

}



