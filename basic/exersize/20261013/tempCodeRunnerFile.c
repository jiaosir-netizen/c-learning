#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long n;
        scanf("%lld",&n);
        int count=0;
        int sum=0;
        while(n!=0)
        {
            sum+=n%10;
           
            if(n%10==0)
            {
                count++;
            }
            n/=10;
        }
        printf("%d %d\n",sum,count);
    }
    return 0;
}