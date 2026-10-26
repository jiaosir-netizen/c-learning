#include<stdio.h>
#include<math.h>
int is_prime(int);
void g(int);
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        g(x);
        printf("\n");
    }
    return 0;
}
int is_prime(int x)
{
    int flag=1;
    if(x<=0)
    {
    	return 0;
	}
    for(int k=2;k*k<=x;k++)
    {
        if(x%k==0)
        {
            flag=0;
            break;
        }
    }
   return flag;
}
void g(int x)
{
    if(x<=3)
    {
        printf("%d",x);
        return;
    }
    else if(is_prime(x) && x>=5)
    {
        int a=0;
        for(int i=(x-1)/2;i>=2;i--)
        {
            if(is_prime(i))
            {
                a=i;
                break;
            }
        }
        int b=x-a;
        g(a);
        printf("+");
        g(b);
       
    }
    else
    {
        int c=0;
        for(int i=sqrt(x);i>0;i--)
        {
            if(x%i==0)
            {
                c=i;
                break;
            }
        }
        int d=x/c;
        printf("[");
        g(c);
        printf("]");
        printf("*");
        printf("[");
        g(d);
        printf("]");
    }
    
}