#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0)
    {
        if(b==0)
        {
            printf("none\n");
        }
        else if(b>0)
        {
            printf("east\n");
        }
        else
        {
            printf("west\n");
        }
    }
    if(a>0)
    {
        if(b==0)
        {
            printf("north\n");
        }
        else if(b>0)
        {
            printf("northeast\n");
        }
        else if(b<0)
        {
            printf("northwest\n");
        }
    }
    if(a<0)
    {
        if(b==0)
        {
            printf("south\n");
        }
        else if(b>0)
        {
            printf("southeast\n");
        }
        else if(b<0)
        {
            printf("southwest\n");
        }
    }
    return 0;
}