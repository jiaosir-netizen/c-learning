#include<stdio.h>
int a[100005];
long long p[100005];
int main()
{
    int n;
    long long b;
    long long  sum=0;
    scanf("%d%lld",&n,&b);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int j=n;
    
    for(int i=1;i<=n;i++)
    {
        p[i]=p[i-1]+a[i-1];
        
    }
    long long max=0;
    for(int i=0;i<=n;i++)
    {
        while((i+j>n || (p[i]+sum-p[n-j])>b) && j>=1)
        {
            j--;
        }
        if((p[i]+sum-p[n-j])<=b)
        {
           if(max<(i+j) && j>=0)
            {
                max=i+j;
            } 
        }
        
    }
    printf("%lld",max);
    return 0;
}