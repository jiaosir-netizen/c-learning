#include <stdio.h>
long long a[10005];
int main()
{
    int n;
    int max=0;
    int count=1;
   
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
       
        if(a[i+1]==a[i]+1)
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
            
            }
            count=1;
           
        }
    }
     if(count>max)
     {
        max=count;
    }
    printf("%d\n", max);
    return 0;
    
}

    