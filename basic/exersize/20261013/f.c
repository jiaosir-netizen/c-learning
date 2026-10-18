#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {   
        int flag=0;
        char prev[100005]={0};
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
            char ch=0;
            scanf(" %c",&ch);
            if(ch=='_' && prev[j]=='_')
            {
                flag=1;
               
            }
            prev[j]=ch;
            }
        
    }
    if(flag==1)
        {
            printf("beta\n");
        }
        else
        {
            printf("gamma\n");
        }
      
    } return 0;
}