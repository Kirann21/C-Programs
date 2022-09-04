#include <stdio.h>
#include <string.h>

int main()
{
   char s[80],temp;
   int i,j, len, count;
   count = 0;

   gets(s);
   len=strlen(s);
   j = len - 1;

   for(i = 0; i < len; i++){
   if(s[i] == ' '){
        for(;i<j;i++,j--)
        {   
            if(s[i] != s[j])
            break;  
        }
        if(i>=j)
        {
            count++;
        }
    }
    if (i == len)
        break;
}

printf("%d", count);
return 0;
}