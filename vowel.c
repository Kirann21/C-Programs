#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    printf("%c is a vowel",c);
    else
    printf("%c is a consonant",c);
    return 0;
}