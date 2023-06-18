// p.458
#include <stdio.h>

int main(void)
{
    int x = 10, y = 20;
    int *pData = &x;

    *pData = 100;

    return 0;
}  
