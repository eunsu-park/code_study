// p.324
#include <stdio.h>

int main()
{
    int List[5] = { 30, 40, 10, 50, 20 };
    int i = 0, j = 0, tmp = 0, MinIndex = 0;

    for (i = 0; i < 4; ++i)
    {
        MinIndex = i;
        for (j = i + 1; j < 5; ++j)
            if (List[MinIndex] > List[j]) MinIndex = j;

        if (MinIndex != i)
        {
            tmp = List[MinIndex];
            List[MinIndex] = List[i];
            List[i] = tmp;
        }
    }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", List[i]);
    }
    putchar('\n');
            
    return 0;
}  