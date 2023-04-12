// p.178
#include <stdio.h>

int main()
{
    int Max = -9999, Input = 0;
    
    scanf("%d", &Input);
    Max = Input > Max ? Input : Max;

    scanf("%d", &Input);
    Max = Input > Max ? Input : Max;

    scanf("%d", &Input);
    Max = Input > Max ? Input : Max;

    printf("Max : %d\n", Max);

    return 0;
}