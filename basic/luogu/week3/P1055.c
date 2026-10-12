#include<stdio.h>
int main()
{
	int a[9],b[9]={1,2,3,4,5,6,7,8,9};
	int sum=0;
	char x;
	scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&x);
	for(int i=0;i<9;i++)
	{
		sum+=a[i]*b[i];
	}
	int flag;
	flag=sum%11;
	if((flag != 10 && flag == x-'0') || (flag==10 && x=='X'))
		printf("Right\n");
	else
	{
		if(flag==10)
		printf("%d-%d%d%d-%d%d%d%d%d-X\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
		else
		printf("%d-%d%d%d-%d%d%d%d%d-%d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],flag);
	}
		
	return 0;
}