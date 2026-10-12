#include<stdio.h>
int a[3005];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=300000;
	for(int i=0;i<=n-m;i++){
		int sum=0;
		for(int s=i;s<i+m;s++){
			sum+=a[s];
		}
		if(sum<=min){
			min=sum;
		}
	}
	printf("%d",min);
	return 0;
}