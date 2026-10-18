#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int z,y,m,d,h;
        scanf("%d%d%d%d%d",&z,&y,&m,&d,&h);
        h=h+(8-z);
        if(h>=24)
        {
            d++;
            h=h-24;
        }
        if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d>31)
        {
            if(d>31)
            {d=d-31;
                m++;
            }
        }
        if(m==2)
        {
            if((y%4==0 && y%100!=0) || (y%400==0))
            {
                if(d>29)
                {d=d-29;
                    m++;
                }
            }
            else{
                if(d>28)
                {d=d-28;
                    m++;
                }
            }

        }
        if(m==6 ||m==9 || m==11 ||m==4 )
        {
            if(d>30)
            {
                d=d-30;
                m++;
            }
            
        }
        if(m>12)
        {
            y++;
            m=1;
        }
        printf("%d-%02d-%02d %02d\n",y,m,d,h);
    }
    return 0;
}