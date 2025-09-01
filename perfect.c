#include <stdio.h>
int perfect(int);
int n, res, m, i;
int main()
{
    printf("Enter Number:\n");
    scanf("%d", &n);
    perfect(n);
}

int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (n == sum)
    {
        printf("%d is Perfect Num\n", n);
    }
    else{
        printf("%d is not a Perfect\n", n);
    }
}
