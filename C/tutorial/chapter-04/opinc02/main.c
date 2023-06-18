// p.135
#include <stdio.h>

int main()
{
    int x = 0, Result = 0;
    
    ++x;
    printf("%d\n", x);

    x++;
    printf("%d\n", x);

    Result = ++x;
    printf("%d, %d\n", Result, x);

    Result = x--;
    printf("%d, %d\n", Result, x);

    return 0;
}