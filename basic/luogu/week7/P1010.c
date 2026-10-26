#include<stdio.h>
void p(int);
int main()
{
    int n;
    scanf("%d",&n);
    return 0;
}
void p(int n)
{
    int s=0;
    int a[500];
    int m=n;
        for(int i=1;i*i<=m;i++)
        {
            if((1<<i) <= m && (1<<(i+1))>m)
            {
                a[s++]=i;
            }
            m=m-(1<<i);
        }
        if(n==1)
        {
            printf("2(0)");
            return;
        }
        for(int k=0;k*k<=n;k++)
        {
            if(n==1<<k)
            {
                printf("2(%d)",k);
                return ;
            }   
        }
        for(int t=0;t<s;t++)
        {
            
        }
        
    
}