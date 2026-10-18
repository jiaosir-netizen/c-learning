#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int sum=0;
    
    for(int z=n/3;z>=0;z--)
    {
        for(int y=(n-3*z)/2;y>=0;y--)
        {
            int x=n-3*z-2*y;
            if(x>=0)
            {
                if((x==0)+(y==0)+(z==0)==0)
                {
                    if((x==y)+(x==z)+(y==z)==3)
                    {
                        sum+=1;
                    }
                    if((x==y)+(x==z)+(y==z)==1)
                    {
                        sum+=3;
                    }
                    if((x==y)+(x==z)+(y==z)==0)
                    {
                        sum+=6;
                    }
                }
                if((x==0)+(y==0)+(z==0)==1)
                {
                    if((x==y)+(x==z)+(y==z)==1)
                    {
                        sum+=1;
                    }
                    if((x==y)+(x==z)+(y==z)==0)
                    {
                        sum+=2;
                    }
                }
                if((x==0)+(y==0)+(z==0)==2)
                {
                    sum+=1;
                }
            }
        }
    }
   
    printf("%d\n",sum);
    return 0;
}