#include<stdio.h>
void sum (int row,int col,int a [][col])
{
    int es=0, os=0;
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            if(a[i][j]%2 == 0)
            
              es = es + a[i][j];
            else
             os = os + a[i][j];  
            
        }
    }
    printf("The sum of even numbers : %d\n",es);
    printf("The sum of odd numbers : %d",os);
}
int main()
{
int n,m;
printf("Enter the row number :\n");
scanf("%d",&n);
printf("Enter the coloumn number :\n");
scanf("%d",&m);
int a[n][m];
for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            printf("Enter a value :\n");
            scanf("%d",&a[i][j]);
        }
    }                  
sum(n,m,a);
}
