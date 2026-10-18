#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long c=a,d=b;
        long long gcd,lcm;
        for(gcd=a%b;gcd!=0;gcd=a%b)
        {
            a=b;
            b=gcd;
        }
        gcd=b;
        lcm=(c*d)/gcd;
        printf("%lld %lld\n",gcd,lcm);
    }
    return 0;
}