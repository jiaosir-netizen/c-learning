#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int j=i;
        while(j!=0){
            int a=0;
            a=j%10;
            j /=10;
            if(a==x)
                count++;
        }

        
    }
    printf("%d",count);

            
    return 0;
}