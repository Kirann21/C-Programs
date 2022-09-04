#include<stdio.h>
int main()
{
    float l,b,area=0.0,perimeter=0.0;
    printf("Enter the length of the rectangle");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle");
    scanf("%f",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The area of the rectangle=%f\n",area);
    printf("The perimeter of the rectangle=%f\n",perimeter);
    return 0;

}