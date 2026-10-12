#include<stdio.h>
int main()
{
	double s;
	double a=2;
	int count=0;
	scanf("%lf",&s);
	double rest=s;
	while(rest>0)
	{
		rest=rest-a;
		a=a*0.98;
		count++;
	}
	printf("%d",count);
	return 0;
}