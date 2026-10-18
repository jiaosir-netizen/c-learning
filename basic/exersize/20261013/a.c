#include<stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        double y;
        if(x<=100)
        {
            y=x*1.0;
        }
        else if(x>100 && x<=150)
        {
            y=100.0+(x-100)*0.8;
        }
        else if(x>150 && x<=200)
        {
            y=140.0+0.5*(x-150);
        }
        else if(x>200)
        {
            y=165.0+0.1*(x-200);
        }
        printf("%.1f\n",y);
    }

    return 0;
}