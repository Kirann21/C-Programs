<<<<<<< HEAD
#include<stdio.h>
void mathi( int a,int b, int *sum , int *diff)
{
    *sum = a+b;
    *diff = a-b;
}
main()
{
    int x = 20 , y = 10 , s , d;
    mathi(x,y, &s,&d);
    printf("s =  %d\n d = %d\n",s,d);
}
=======
#include <stdio.h>
int main(void)
{
	int i = 40 >> 5 << 3 >> 2 << 1;
	printf("%d", i);
	return 0;
}
>>>>>>> cc2e9af9d9ada7670c3f5beb3b871d4f9da558a4
