#include<stdio.h>
int main()
{
	int o,a,b,c,d,e,f;
	int month[13]={0,32,29,32,31,32,31,32,32,31,32,31,32};
	
	while(scanf("%d%d%d%d%d%d%d",&o,&a,&b,&c,&d,&e,&f)!=EOF)
	{
		long long second1=d*3600+e*60+f;
		long long day=0;
		
		
		if(o==0)
		{
			day=day+(72-a)*377+c-1;
			for(int i=0;i<b;i++)
			{
				day+=month[i];
				
			}
						day=day-250;
		}
		if(o==1)
		{
			day=day+(72+a-1)*377+c-1;
			for(int i=0;i<b;i++)
			{
				day+=month[i];
				
			}
			day=day-250;
		}
		long long second=day*86400+second1-12*3600;
		int second0=0;
		if(second%377>=189)
		{
			second0=second/377+1;
		}
		else
		{
			second0=second/377;
		}
		int day2=second0/86400;
		second0=second0%86400;
		int day0=11,month0=5,year0=2089;
		for(int i=0;i<day2;i++)
		{
			
			day0++;
			if(month0==1 || month0==3 || month0==5 || month0==7 || month0==8 || month0==10 || month0==12)
			{
				if(day0>31)
				{
					month0++;
					day0=day0-31;
				}
			}
			if(month0==2)
			{
				if(day0>28)
				{
					month0++;
					day0=day0-28;
				}
		    }
			if(month0==4 || month0==6 || month0==9 || month0==11)
			{
				if(day0>30)
				{
					day0=day0-30;
					month0++;
				}
			}
			if(month0>12)
			{
				year0++;
				month0=month0-12;
			}
		}
			int hour0=0,minute0=0;
			if(second0>=60)
			{
				minute0=second0/60;
				second0=second0%60;
			}
			if(minute0>=60)
			{
				hour0=minute0/60;
				minute0=minute0%60;
			}
			printf("%d-%02d-%02d %02d:%02d:%02d\n",year0,month0,day0,hour0,minute0,second0);		
	}
	return 0;
}