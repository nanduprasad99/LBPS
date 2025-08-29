#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter no of rows and coloumns :\n");
    scanf("%d %d",&m,&n);
    printf("Enter no of rows and coloumns :\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("Multication is not possible\n");
    }
    else {
    int a[m][n] , b[p][q] , c[m][q];
    printf("Enter 1st Matrix Elements :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Second Matrix elements :\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
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
    
}
