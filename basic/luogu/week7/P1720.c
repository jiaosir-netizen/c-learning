#include<stdio.h>
double f(int);
double a[50];
int main()
{
    int n;
    scanf("%d",&n);
    printf("%.2lf",f(n));
    return 0;
}
double f(int x)
{
    if(x==1 || x==2)
        return 1;
    
    if(a[x]!=0)
        return a[x];
    else
    {
        a[x]=f(x-1)+f(x-2);
        return f(x-1)+f(x-2);
    }
    
}