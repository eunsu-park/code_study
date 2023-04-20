// p.253
#include <stdio.h>

int main()
{
    int Input = 0, i = 0;

    scanf("%d", &Input);
    if (Input < 1)
        Input = 1;
    else if (Input > 9)
        Input = 9;

    while (i < Input)
    {
        putchar('*');
        i++;
    }

    putchar('\n');    
    return 0;
}