// p.374
#include <stdio.h>

int main(void)
{
    int x = 10;
    int *pData = &x;

    printf("x : %d\n", x);
    *pData = 20;

    printf("x : %d\n", x);

    return 0;
}
