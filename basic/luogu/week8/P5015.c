#include<stdio.h>
int main()
{
    char a[6];
    char ch;
    int cnt=0;
    for(int i=0;i<6;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]=='\n')
            break;
        if(a[i]!=' ')
            cnt++;
    }
    
    printf("%d",cnt);
    return 0;
}