// p.260
#include <stdio.h>

int main()
{
    int i = 0, j = 0;

    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5 + i; ++j)
        {
            if (i + j >= 4) printf("*\t");
            else putchar('\t');

        }

        putchar('\n');
    }

    return 0;
}