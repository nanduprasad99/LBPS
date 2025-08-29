#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter no of rows and coloumns :\n");
    scanf("%d %d",&m,&n);
    int a[m][n] , b[m][n] , c[m][n];
    printf("Enter 1st Matrix Elements :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Second Matrix elements :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t", c[i][j]);
            
        }
        printf("\n");
    }

    
}
