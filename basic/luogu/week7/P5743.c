#include<stdio.h>
int f(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n-1));
    return 0;
}
int f(int n)
{
    if(n<=0)
        return 1;
    return 2*(f(n-1)+1); 
}
