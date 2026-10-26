#include<stdio.h>
#include<math.h>
double f(int,int);
int x[3005];
int y[3005];
int z[3003];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    double min=2.0;
    int j0=0,i0=0;
    for(int s=1;s<=n;s++)
    {
        for(int k=s+1;k<=n;k++)
        {
            if(min>f(s,k) )
            {
                min=f(s,k);
                i0=s;
                j0=k;
            }
        }
    }
    printf("%d %d %.6lf",i0,j0,min);
    return 0;
}
double f(int a,int b)
{
    double sx=fabs((1.0*(1.0*x[a]*x[b]+1.0*y[a]*y[b]+1.0*z[a]*z[b]))/sqrt((1.0*x[a]*x[a]+1.0*y[a]*y[a]+1.0*z[a]*z[a])*(1.0*x[b]*x[b]+1.0*y[b]*y[b]+1.0*z[b]*z[b])));
    return sx;
}