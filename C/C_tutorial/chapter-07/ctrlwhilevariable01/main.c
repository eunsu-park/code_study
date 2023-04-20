// p.228
#include <stdio.h>

int main()
{
    char ch = 0;
    int Index = 0;

    while ((ch = getchar()) != '\n')
    {
        printf("%02d\t%c\n", Index, ch);
        ++Index;
    }

    return 0;
}