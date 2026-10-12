#include<stdio.h>
int main()
{	
	int l,m;
	scanf("%d%d",&l,&m);
	int sum=l+1;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		sum=sum-(v-u+1);
	}
	printf("%d",sum);
	return 0;
}