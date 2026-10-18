#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int sum=0;
        if(n<=20)
        {
            sum=n*2;
        }
        else
        {
            sum=40+(n-20);
        }
        printf("%d\n",sum);
    }
    return 0;
}