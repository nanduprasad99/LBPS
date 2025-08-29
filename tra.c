#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter no of rows and coloumns :\n");
    scanf("%d %d", &m, &n);
    int a[m][n], c[n][m];
    printf("Enter 1st Matrix Elements :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
