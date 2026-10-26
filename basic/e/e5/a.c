#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a=0,count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==k)
        count++;
    }
    printf("%d",count);
    return 0;
}