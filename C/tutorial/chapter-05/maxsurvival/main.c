// p.169
#include <stdio.h>

int main()
{
    int Max = 0, Input = 0;

    scanf("%d", &Input);
    Max = Input > Max ? Input : Max;

    scanf("%d", &Input);
    Max = Input > Max ? Input : Max;

    scanf("%d", &Input);
    Max = Input > Max ? Input : Max;

    printf("MAX : %d\n", Max);

    return 0;
}