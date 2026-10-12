#include<stdio.h>
int main()
{
	int y,m;
	scanf("%d%d",&y,&m);
	if(2==m){
		if(y%4==0){
			printf("29\n");
		}
		else{
			printf("28\n");
		}
	}
	else{
		if(1==m || 3==m || 5==m || 7==m || 8==m || 10==m || 12==m){
			printf("31\n");
		}
		else{
			printf("30\n");
		}
	}
	return 0;
}