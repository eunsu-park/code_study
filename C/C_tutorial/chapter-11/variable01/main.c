// p.425
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    auto int List[3] = {10, 20, 30};
    auto int i = 0;

    for (i = 0; i < 3; ++i)
        printf("%d\t", List[i]);

    return 0;
}
