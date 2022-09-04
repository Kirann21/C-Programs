#include<stdio.h>
void multiply (int row1,int row2, int col1 , int col2,int a[row1][col1], int b[row2][col2])
{
  int m[10][10];
    printf("The matrix after multiplication\n");
    for(int i = 0 ; i < row1 ; i++)
    {
        for(int j = 0 ; j < col1 ; j++)
        {
               m[i][j] = 0;
            for(int k = 0 ; k < col1 ; k++)
            {
                m[i][j] = m[i][j]+ (a[i][k]*b[k][j]);
        }
         printf("%d\t",m[i][j]);
    }
       printf("\n");   
}
}

int main()
{
    int row1, row2,col1, col2;
printf("Enter no.of rows of first matrix\n");
scanf("%d",&row1);
printf("Enter no.of rows of first matrix\n");
scanf("%d",&col1);
int a[row1][col1];
printf("Enter the elememts\n");
 for(int i = 0 ; i < row1 ; i++)
    {
        for(int j = 0 ; j < col1 ; j++)
        {
            printf("Enter a value\n");
          scanf("%d",&a[i][j]);
        }
}
 printf("Enter no.of rows of second matrix\n");
scanf("%d",&row2);
printf("Enter no.of rows of second matrix\n");
scanf("%d",&col2);
int b[row2][col2];
printf("Enter the elememts\n");
 for(int i = 0 ; i < row2 ; i++)
    {
        for(int j = 0 ; j < col2 ; j++)
        {
            printf("Enter a value\n");
          scanf("%d",&b[i][j]);
        }
}
multiply(row1,row2,col1,col2,a,b);
}