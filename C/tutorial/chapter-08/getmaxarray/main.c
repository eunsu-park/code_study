// p.291
#include <stdio.h>

int main()
{
    int List[5] = { 30, 40, 10, 50, 20 };
    int i = 0;

    for (i = 1; i < 5; ++i)
        if (List[i] > List[0])
            List[0] = List[i];

    for (i = 0; i < 5; ++i)
        printf("%d\t", List[i]);
    putchar('\n');

    printf("Max: %d\n", List[0]);
        
    return 0;
}