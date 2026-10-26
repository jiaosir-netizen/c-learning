#include<stdio.h>
#include<math.h>
void f(int,int,int,int,int);
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x1,y1,x2,y2,a;
        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&a);
        void f(int x1,int y1,int x2,int y2,int a);
    }
    return 0;
}
void f(int x1,int y1,int x2,int y2,int a)
{
    double pi= acos(-1.0);
    double th=pi*1.0*a/180;
    double newx=(x1-x2)*cos(th)+(y1-y2)*sin(th);
    double newy=(x1-x2)*sin(th)+(y1-y2)*cos(th);
    printf("%.10lf %.10lf\n",newx+x2,newy+y2);
    return;
}