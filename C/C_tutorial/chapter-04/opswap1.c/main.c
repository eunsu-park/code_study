// p.123
#include <stdio.h>

int main()
{
    int x = 0, y = 20, Tmp = 0;

    printf("Before: %d, %d\n", x, y);

    Tmp = x;
    x = y;
    y = Tmp;

    printf("After: %d, %d\n", x, y);

    return 0;
}