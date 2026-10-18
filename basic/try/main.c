#include <stdio.h>

int is_alarm(int temperature);

int main(void)
{
    int temperature = 35;
    printf("%d\n", is_alarm(temperature));
    return 0;
}