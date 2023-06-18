// p.453
#include <stdio.h>

int* TestFunc(void)
{
    int Data = 10;
    return &Data;
}

int main(void)
{
    int *pResult = NULL;
    pResult = TestFunc();

    printf("%d\n", *pResult);

    return 0;
}  
