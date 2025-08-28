#include <stdio.h>
int power(int , int)
int main()
{
    int a,b,res;
    printf("Enter base : \n");
    scanf("%d",a);
    printf("Enter power : \n");
    scanf("%d",b);
    res = power(a,b);
    printf("Val %d\n",res);

    return 0;
}
int power(int a,int b)
{
int temp=a ,i;
    for(i=1;i<b;i++){
        a=a*temp;
    }
    return 0;
}
