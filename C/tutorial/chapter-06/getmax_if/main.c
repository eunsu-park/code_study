// p.216
#include <stdio.h>

int main()
{
    int Max = 0, Input = 0;

    scanf("%d", &Max);

    scanf("%d", &Input);
    if (Input > Max) Max = Input;

    scanf("%d", &Input);
    if (Input > Max) Max = Input;

    printf("Max : %d\n", Max);

    return 0;
}