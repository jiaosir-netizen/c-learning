#include<stdio.h>
int f(int);
int sum(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int f(int n)
{
    if(n<=1)
        return 1;
    return n*f(n-1);
}
int sum(int n)
{
    if(n==1)
        return 1;
    return f(n)+sum(n-1);
}