// p.377
#include <stdio.h>

int main(void)
{
    int List[5] = { 0 };
    int *pData = List;

    printf("List[0] : %d\n", List[0]);

    *pData = 20;
    printf("List[0] : %d\n", List[0]);

    return 0;
}
