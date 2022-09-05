#include<stdio.h>
int main()
{
    float bill=0.0;
    int n;
    printf("Enter the number of calls\n");
    scanf("%d",&n);
    if(n<100)
    
      bill=250.0+(n*0.2);
    
    else if(n>100 && n<200)
    
       bill=250.0+(100*0.2)+((n-100)*0.3);
    
    else 
    
       bill=250.0+(100*0.2)+(100*0.3)+((n-200)*0.5);
     
    printf("bill=%f/-",bill);
    
    return 0;
}