#include<stdio.h>
int main()
{
  char arr[] = "geeksforgeeks";
  char *ptr1 = arr;
  char *ptr2 = ptr1 + 10;
  printf ("ptr2 - ptr1 = %d\n", ptr2 - ptr1);
  printf ("(int*)ptr2 - (int*) ptr1 = %d", (int*)ptr2 - (int*)ptr1);
  getchar();
  return 0;
}
