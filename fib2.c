#include<stdio.h>
int main()
{
    int i,sum,n;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
