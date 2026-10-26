#include<stdio.h>
#include<math.h>
int main()
{
    double r,a;
    double pi=acos(-1);
    scanf("%lf%lf",&r,&a);
    if(a>=360)
        printf("0\n");
    else
    {
        double s=pi*r*r*(1.0-1.0*a/360);
        printf("%.9lf\n",s);
    }
    return 0;
}