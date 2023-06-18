// p.270
#include <stdio.h>

int main()
{
    int List[5] = { 10, 20, 30, 40, 50};
    int ListNew[5] = {0};
    int i = 0;

    for (i = 0; i < 5; ++i)
    {
        ListNew[i] = List[i];
    }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", ListNew[i]);
    }
    putchar('\n');
    
    return 0;
}