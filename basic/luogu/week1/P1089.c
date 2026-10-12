#include<stdio.h>
int main()
{
	int yusuan;
	int rest=0,sum=0,b=0;
	for(int i=1;i<=12;i++)
	{
		scanf("%d",&yusuan);
		if(rest+300>=yusuan)
		{
			sum=rest+300-yusuan;
			b+=sum/100;
			rest=sum%100;
		}
		else
		{
			printf("%d\n",-i);
			return 0;
		}
	}
	int a=b*120+rest;
	printf("%d",a);
	return 0;
}