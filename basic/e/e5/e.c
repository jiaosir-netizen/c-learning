#include<stdio.h>
#include<math.h>
void is_snow(int,int,int);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=2*n;i++)
    {
    	
        for(int j=0;j<=6*n;j++)
        {
        	if(j==3*n && i==n)
        	{
        		printf("*");
			}
			else
			{
				is_snow(n,i,j);
			}
           
            
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
void is_snow(int n,int i,int j)
{
    if(j-2*i==n || j+2*i==5*n || i==n && j%3==0)
        printf("*");
    else
    {
        printf(" ");
    }
}