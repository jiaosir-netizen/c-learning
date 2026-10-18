#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        long long c=a,d=b;
        long long sum=0;
        int gcd=0;
        while(d>0)
        {
           long long temp=c%d;
           c=d;
           d=temp;
            
        }
        gcd=c ;
        sum=((a-1)*(b-1)+gcd-1)/2;
        
        printf("%lld\n",sum);
    }
    return 0;
}