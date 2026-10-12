#include<stdio.h>
int main()
{
    int a[105]={0};
    int i;
    for(i=0;;i++)
    {
        if(scanf("%d",&a[i]), a[i]==0)
        {
            break;
        }
        
    }
    for(int j=1;j<=i;j++)
    {
        printf("%d ",a[i-j]);
    }
    return 0;
}