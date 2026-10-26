#include<stdio.h>
void move(int,char,char);
void hanoi(int,char,char,char);
int main()
{
    int n;
    char a='A',b='B',c='C';
    scanf("%d",&n);
    hanoi(n,a,b,c);
    return 0;
}
void move(int i,char from,char to)
{
    printf("%d %c %c\n",i,from,to);
}
void hanoi(int n,char from,char via,char to)
{
    if(n==1)
    {
        move(1,from,via);
        move(1,via,to);
        return;
    }
    hanoi(n-1,from,via,to);
    move(n,from,via);
    hanoi(n-1,to,via,from);
    move(n,via,to);
    hanoi(n-1,from,via,to);
    
}