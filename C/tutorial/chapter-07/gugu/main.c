// p.256
#include <stdio.h>

int main()
{
    int Input = 0, i = 1;

    scanf("%d", &Input);

    if (Input >= 2 && Input <= 9)
    {
        while (i < 10)
        {
            printf("%d * %d = %d\n", Input, i, Input * i);
            i++;
        }
    }
    else
        puts("ERROR");

    return 0;
}