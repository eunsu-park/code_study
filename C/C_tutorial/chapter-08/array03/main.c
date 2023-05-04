// p.268
#include <stdio.h>

int main()
{
    int List[5] = { 10, 20, 30, 40, 50};
    int i = 0;

    List[0] = List[4];
    List[1] += List[2];
    List[4] = List[3] + 2;


    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", List[i]);
    }
    putchar('\n');
    
    return 0;
}