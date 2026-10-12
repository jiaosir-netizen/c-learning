#include<stdio.h>
long long a[1005];
int b[1005]={0};
int main()
{
	int n;
	int flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		b[i]=a[i+1]-a[i];
		if(b[i]<0)
			b[i]=-b[i];
		for(int s=0;s<i;s++){
			if(b[i]==b[s]){
				flag=1;
				break;
			}
		}
		}
	
	if(1==flag)
		printf("Not jolly");
	else
		printf("Jolly");
	return 0;
}