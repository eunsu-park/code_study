// p.459
#include <stdio.h>

int main(void)
{
    int List[3] = { 10, 20, 30 };
    int *pData = List;

    *(pData + 1) = 100;

    return 0;
}  
