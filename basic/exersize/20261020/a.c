#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b;
        int count=0;
        scanf("%d%d",&a,&b);
        if(a-b>0)
        {
            count=a+b-1-(a-b);
        }
        else
        {
            count=a+b-1-(b-a);
        }
        printf("%d\n",count);
    }
    return 0;
}