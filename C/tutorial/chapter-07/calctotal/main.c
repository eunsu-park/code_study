// p.255
#include <stdio.h>

int main()
{
    int Total = 0, i = 0;

    while (i < 10)
        Total += ++i;
    
    printf("Total: %d\n", Total);
    
    return 0;
}