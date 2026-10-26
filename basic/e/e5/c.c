#include<stdio.h>
long long a[1005][1005];
long long g(int,int);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%lld",g(i,j)%998244353);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

long long g(int m,int n)
{
    if(m==n || m==1 || m==0 || n==0)
        return 1;
    if(a[m][n]!=0)
        return a[m][n];
    a[m][n]=(g(m-1,n-1)+g(m-1,n))%998244353;
    return a[m][n];
}