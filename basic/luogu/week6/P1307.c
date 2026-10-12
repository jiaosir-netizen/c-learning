#include<stdio.h>
#include <math.h>
int main()
{
    long long n,m=0;
    scanf("%lld",&n);
    int a[10]={0};
    int count=0;
    while(n!=0)
    {
        a[count]=n%10;
        n/=10;
        count++;
    }
    for(int i=0;i<count;i++)
    {
        m+=a[i]*pow(10,count-i-1);
    }
    printf("%lld",m);
    return 0;
}