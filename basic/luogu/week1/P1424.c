#include<stdio.h>
int main()
{	
	int x,a,sum=0;
	scanf("%d%d",&x,&a);
	for(int i=x;i<=x+a-1;i++)
	{
		if(i%7==0||i%7==6)
		{
			continue;
		}
		else
		{
			sum+=250;	
		}
	}
	printf("%d\n",sum);
	
	return 0;
}