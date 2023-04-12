// p.177
#include <stdio.h>

int main()
{
    int Max = 0;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    Max = a;
    Max = b > Max ? b : Max;
    Max = c > Max ? c : Max;

    printf("Max : %d\n", Max);

    return 0;
}