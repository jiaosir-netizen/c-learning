#include<stdio.h>
int a[1005]={0};
int f(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
int f(int n)
{
    if(n<=1)
        return 1;
    else
    {
        int total=1;
        a[1]=1;
        if(a[n]!=0)
        {
            return a[n];
        }
        if(a[n]==0)
        {
            for(int i=1;i<=n/2;i++)
            {
                total+=f(i);
            }
            a[n]=total;
            return total;  
            
        }
        
    }
    
}