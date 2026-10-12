#include<stdio.h>
int main()
{
	int a[10];
	int i=0;
	for ( i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int c;
	int count=0;
	
	scanf("%d",&c);
	for(int b=0;b<i;b++)
	{
		if(a[b]<=c+30)
		count++;
		
	}
	printf("%d",count);
	return 0;
}