#include<stdio.h>
int main()
{
    char a[105];
    scanf("%s",a);
    for(int i=0;i<105;i++)
    {
        if(a[i]>='a'&&a[i]<='z'&&a[i]!='\0')
        {
            a[i]=a[i]-'a'+'A';
        }
        
    }printf("%s",a);
    return 0;
}