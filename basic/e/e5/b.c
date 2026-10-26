#include<stdio.h>
long long qpow(long long,int,long long);
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n", (qpow(4,n, 1000000007)*8)% 1000000007);
    }
    return 0;
}
long long qpow(long long a, int b, long long P) {
    long long ans = 1;
    a %= P;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a % P;
        }
        a = a * a % P;
        b >>= 1;
    }
    return ans % P;
}