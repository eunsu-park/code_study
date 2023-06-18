// p.473
#include <stdio.h>

int main(void)
{
    int i = 0, Fact = 1;
    for (i = 5; i >= 1; --i)
        Fact *= i;

    printf("5! == %d\n", Fact);
    return 0;
}  
