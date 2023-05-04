// p.264
#include <stdio.h>

int main()
{
    int List[5] = {0};
    int i = 0;

    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &List[i]);
    }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", List[i]);
    }
    
    return 0;
}