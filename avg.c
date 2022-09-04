#include<stdio.h>
void main()
{
    int a,b,c,sum=0;
    float avg=0.0;
    printf("Enter the three numbers");
    scanf("%d,%d,%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("The sum of the three numbers=%d\n",sum);
    printf("The average of the three numbers=%f\n",avg);
    }