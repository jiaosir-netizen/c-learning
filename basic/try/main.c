#include <stdio.h>
#include "monitor.h"

int main()
{
    int temperature = 0;
    printf("请输入温度：\n");
    scanf("%d",&temperature);
    printf("当前温度：%d\n",temperature);
    int result = is_alarm(temperature);
    printf("%d\n", result);
    return 0;
}