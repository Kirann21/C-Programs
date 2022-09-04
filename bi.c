#include<stdio.h>
int main()
{
  int n,rem,a[10],j=0;
  printf("enter a number in decimal to convert it in binary\n");
  scanf("%d",&n);
  while(n)
  {
    rem=n%2;
    n=n/2;
    a[j]=rem;
    j++;
  }
  for(int i=i-1;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  return 0;
}