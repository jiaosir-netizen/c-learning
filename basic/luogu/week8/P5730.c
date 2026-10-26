#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char pattern[10][5][4] = {
    {   // 0
        "XXX",
        "X.X",
        "X.X",
        "X.X",
        "XXX"
    },
    {   // 1
        "..X",
        "..X",
        "..X",
        "..X",
        "..X"
    },
    {   // 2
        "XXX",
        "..X",
        "XXX",
        "X..",
        "XXX"
    },
    {   // 3
        "XXX",
        "..X",
        "XXX",
        "..X",
        "XXX"
    },
    {   // 4
        "X.X",
        "X.X",
        "XXX",
        "..X",
        "..X"
    },
    {   // 5
        "XXX",
        "X..",
        "XXX",
        "..X",
        "XXX"
    },
    {   // 6
        "XXX",
        "X..",
        "XXX",
        "X.X",
        "XXX"
    },
    {   // 7
        "XXX",
        "..X",
        "..X",
        "..X",
        "..X"
    },
    {   // 8
        "XXX",
        "X.X",
        "XXX",
        "X.X",
        "XXX"
    },
    {   // 9
        "XXX",
        "X.X",
        "XXX",
        "..X",
        "XXX"
    }
};
    char num[105];
    scanf("%s",num);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%s",pattern[(num[j]-'0')][i]);
            if(num[j+1]!='\0')
            {
                printf(".");
            }
           
        } 
        printf("\n");
    }
    return 0;
}