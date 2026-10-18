#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n+1;i++)
    {
        if(i==n)
            {
                for(int k=0;k<2*n+1;k++)
                {
                    if(k!=n)
                    {
                        printf("-");
                    }
                    else
                    {
                        printf("+");
                    }
                }
                printf("\n");
            }
        else
        {
            for(int j=0;j<2*n+1;j++)
             {
                if(j==n)
                {
                    printf("|");
                }
                else
                {
                    if(j==i)
                    {
                        printf("\\");
                    }
                    else if(j==2*n-i)
                    {
                        printf("/");
                    }
                    else if((j+i<2*n && j<i) || (j+i>2*n && j>i))
                    {
                        printf("|");
                    }
                    else
                    {
                        printf("-");
                    }

                }
             }
             printf("\n");
        }
        
            
        
    }
    return 0;
}