#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int y,m,d,k;
        scanf("%d %d %d %d",&y,&m,&d,&k);
        for(int i=0;i<k;i++)
        {
            d++;
            int flag=0;
            if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            {
                if(d>31)
                {
                    d=d-31;
                    flag=1;
                }
            }
            if((m==2 && y%400==0) || (m==2 && y%4==0 && y%100!=0))
            {
                if(d>29)
                {
                    d=d-29;
                    flag=1;
                }
            }
            else if(m==2 && (y%4!=0||(y%100==0 && y%400!=0)))
            {
                if(d>28)
                {
                    d=d-28;
                    flag=1;
                }
            }
            if(m==4||m==6||m==9||m==11)
            {
                if(d>30)
                {
                    d=d-30;
                    flag=1;
                }
            }
            if(flag==1)
            {
                m++;
            }
            if(m>12)
            {
                y++;
                m=m-12;
            }
        }
        printf("%d %d %d\n",y,m,d);
    }
    

    return 0;
}