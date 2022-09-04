#include<stdio.h>
#include<string.h>
int main()
{
    char m ;
    char ar[100];
    printf("enter a word : \n");
    scanf("%s",ar);
    int k = strlen(ar);
    printf("%d",k);
    for(int i = 0 ; i <= k/2 ; i++ )
    {
       m = ar[i];
       ar[i]=ar[k-1-i];
       ar[k-1-i]=m;
        
    }
    printf("the reverse of the word : %s \n",ar);
    return 0;
}