#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long x,c,l,r;
        int count=0;
        scanf("%lld%lld%lld%lld",&x,&c,&l,&r);
        if(x>=l && x<=r)
        {
            printf("0\n");
        }
        
        else
        {   
            int found=0;
            while(1)
            {
                
                if(x%2==0)
                {
                    x=x/2;
                }
                else
                {
                    x=x+c;
                }
                if(x>=l && x<=r)
                {
                    count++;
                    found=1;
                    break;
                }
                else
                {
                    count++;
                }
                if(count>=10000)
                {
                    break;
                    found=0;
                }
            }
            if(found==1)
            {
                printf("%d\n",count);
            }
            else
            {
                printf("CHAOS\n");
            }
        }
    }
    return 0;
}