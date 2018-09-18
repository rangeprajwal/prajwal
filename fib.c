#include<stdio.h>
int main()
{
    int t1=0,t2=1,t3,i,n;
    printf("enter the numbers");
    scanf("%d",&n);
    printf("the series");
    for(i=1;i<=n;i++)
    {
        printf("%d",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }

return 0;

}
