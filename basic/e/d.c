#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long way[65]={0};;
    way[0]=1;
    way[1]=1;
    way[2]=2;
    for(int i=3;i<=n;i++)
    {
        way[i]=way[i-1]+way[i-2]+way[i-3];
    }
   
    printf("%lld\n",way[n]);
    return 0;
}