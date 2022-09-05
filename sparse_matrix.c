#include<stdio.h>
void sparse (int row,int col,int a [][col])
{
    int flag =0, pro = (row*col)/2;
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            if(a[i][j] == 0)
              flag++;    
        }
    }
     if(flag > pro)
    printf("It is a sparse matrix");
    else
    printf("It is not a sparse matrix");
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
sparse(n,m,a);
}
