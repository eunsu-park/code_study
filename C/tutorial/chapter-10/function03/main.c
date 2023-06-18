// p.333
#include <stdio.h>

int GetMax(int a, int b, int c)
{
    int Max = a;
    if (b > Max) Max = b;
    if (c > Max) Max = c;

    return Max;
}

int main()
{
    int Result = 0;

    Result = GetMax(1, 2, 3);
    printf("Max: %d\n", Result);

    printf("Max: %d\n", GetMax(2, 3, 1) * 2);

    printf("Max: %d\n", Result = GetMax(3, 1, 2));

    return 0;
}  