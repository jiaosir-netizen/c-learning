#include<stdio.h>
int is_prime(int);
int g(int);
int main()
{
    int t;
    for(int i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        g(x);
    }
    return 0;
}
int is_prime(int x)
{
    int flag=0;
    for(int k=0;k*k<x;k++)
    {
        if(x%k==0)
        {
            flag=1;
            return 0;
        }
    }
    if(flag==1)
    {
        return 1;
    }
}
void g(int x)
{
    if(x<=3)
    {
        printf("S(%d)=%d",x,x);
        return;
    }
    if(is_prime(x) && x>=5)
    {
        int a=0;
        for(int i=1;i<(x-1)/2;i++)
        {
            if(is_prime(i) && i>a)
            {
                a=i;
            }
        }
        int b=x-a;
        g(a);
        printf("+");
        g(b);
    }
    else
    {
        int c=0;
        for(int i=1;i*i<=x;i++)
        {
            if(x%i==0 && i>c)
            {
                c=i;
            }
        }
        int d=x/c;
        g(c);
        printf("*");
        g(d);
    }
    return;
}