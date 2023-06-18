// p.449
#include <stdio.h>
#include <stdlib.h>

void Swap(int *pLeft, int *pRight)
{
    int tmp = *pLeft;
    *pLeft = *pRight;
    *pRight = tmp;
}

int main(void)
{
    int x = 10, y = 20;

    Swap(&x, &y);
    printf("%d, %d\n", x, y);

    return 0;
}  
