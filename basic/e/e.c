#include<stdio.h>
#include<mati.h>
char a[100005]={0};
int d[100005]={0};
int main()
{
    int n;
    int d1=0,d2=0;
    int max=0;
    long long sum=0;
    long long  ans=0;
    for (int i=0;i<n;i++)
    {
        scanf(" %c",a[i]);
    }
    for(int k=1;k<n;k++)
    {
        int p=0;
        if(a[k]='1')
        {
            int s=pow(2,d2-1)
            if(s>d1)
            {
                d1=0;
                p=0;
            }
            else
            {
                d1=d1-s;
                d1++;
                p=d1;
            }
        }
        if(a[k]='0')
        {
            d2++;
            d1=0;
            p=0;
        }
        int x=k*p%998244353;
        sum+=x;
        sum=sum%998244353;
        if(p>max)
        {
            max=p;
        }
        ans+=ans^p;
    }
    printf("%d\n%d\n%d\n",max,ans,sum);
    return 0;
}