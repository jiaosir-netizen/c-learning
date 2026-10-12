#include<stdio.h>
int main()
{
	int n;
	int cnt=0;
	int cost[10]={6,2,5,5,4,5,6,3,7,6};
	scanf("%d",&n);
	for(int a=0;a<1000;a++){
		for(int b=0;b<1000;b++){
			int c=b+a;
			int sum=0;
			int x=a;
			int y=b;
			int z=c;
			do{
				sum+=cost[x%10];
				x/=10;
			}while(x>0);
			do{
				sum+=cost[y%10];
				y/=10;
			}while(y>0);
			do{
				sum+=cost[z%10];
				z/=10;
			}while(z>0);
			if(4+sum==n){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}