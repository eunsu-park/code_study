// p.229
#include <stdio.h>

int main()
{
    char ch = 0;

    while ((ch = getchar()) != '\n')
    {
        int Index = 0;
        printf("%02d\t%c\n", Index, ch);
        ++Index;
    }

    return 0;
}