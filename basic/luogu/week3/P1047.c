#include<stdio.h>
long long c[100005]={0};
int main()
{
	long long l,count=0;
	int m;
	scanf("%lld%d",&l,&m);
	for(long long k=0;k<=l;k++)
	{
		c[k]=0;
	}
	
	
	for(int i=0;i<m;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		for(int s=0;s<=l;s++)
		{
			if(s<=v &&  s>=u)
			c[s]=1;
		}
	}
	for(long long t=0;t<=l;t++)
	{
		if(c[t]==0)
		count++;
	}
	printf("%lld",count);
	return 0;
}