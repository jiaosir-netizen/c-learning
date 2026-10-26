#include<stdio.h>
#include<math.h>
int x[200005];
int y[200005];
int z[200005];
double p(int,int);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    int q;
    scanf("%d",&q);
    for(int k=1;k<=q;k++)
    {
        int a,b,c,d,e;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        double pa,pb,pc,pd,pe,pf;
        pa=sqrt(((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b])+(z[a]-z[b])*(z[a]-z[b])));
        pb=sqrt(((x[b]-x[c])*(x[b]-x[c])+(y[b]-y[c])*(y[b]-y[c])+(z[b]-z[c])*(z[b]-z[c])));
        pc=sqrt(((x[d]-x[c])*(x[d]-x[c])+(y[d]-y[c])*(y[d]-y[c])+(z[d]-z[c])*(z[d]-z[c])));
        pd=sqrt(((x[a]-x[d])*(x[a]-x[d])+(y[a]-y[d])*(y[a]-y[d])+(z[a]-z[d])*(z[a]-z[d])));
        pe=sqrt(((x[b]-x[e])*(x[b]-x[e])+(y[b]-y[e])*(y[b]-y[e])+(z[b]-z[e])*(z[b]-z[e])));
        pf=sqrt(((x[e]-x[d])*(x[e]-x[d])+(y[e]-y[d])*(y[e]-y[d])+(z[e]-z[d])*(z[e]-z[d])));
        printf("%.2lf %.2lf %.2lf %.2lf %.2lf %.2lf\n",pa,pb,pc,pd,pe,pf);
    }
    return 0;
}
