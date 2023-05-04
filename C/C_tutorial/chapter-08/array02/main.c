// p.266
#include <stdio.h>

int main()
{
    int List[5] = { 10, 20, 30, 40, 50};
    int i = 0;

    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", List[i]);
    }
    putchar('\n');

    List[0] = 100;
    List[3] = 200;

    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", List[i]);
    }
    putchar('\n');
    
    return 0;
}