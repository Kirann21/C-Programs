#include<stdio.h>
#include<string.h>
int main()
{
 int k;
char str [100];
printf("Enter a sentence");
scanf("%[^\n]s",str);
k = strlen(str);
 int v = 0, c=0 , w=0 ,sc=0,d=0;
for(int i = 0 ; i <= k ; i++)
{
    if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
    {
      if(str[i] == 'A'|| str[i] == 'E'||str[i] == 'I'|| str[i] == 'O'||str[i] == 'U'|| str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u')
      v++;
      else 
      c++;
    }  
   else if (str[i] == ' ')
   w++;
   else if (str[i] >= '0' && str[i] <= '9')
   {
    d++;
   }
    else
    sc++;
   }
   printf("Vowels = %d\n",v);
    printf("Consonants = %d\n",c);
     printf("digits = %d\n",d);
      printf("Spaces = %d\n",w);
       printf("Special char = %d\n",sc);
}
   
   
   
   
