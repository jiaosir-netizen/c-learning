#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int count=0;
    for(int i=0;i<100*n;i++)
    {
         int prev=0;
         int flag=0;
         int s[7]={0};
         int temp=i;
         while(temp>0)
         {
            for(int j=0;j<7;j++)
            {
               s[j]=temp%10;
            temp=temp/10;
            if(s[j]==6 && prev==7)
            {
                flag=1;
                break;
            }
            prev=s[j]; 
            }
            
         }
         if(flag==1 && count<=n)
         {
             count++;
             printf("%d\n", i);
         }
    }
    return 0;
}