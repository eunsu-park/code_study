// p.271
#include <stdio.h>

int main()
{
    int List[5] = { 10, 20, 30, 40, 50};
    int i = 0, Max = List[0];

    for (i = 1; i < 5; ++i)
    {
        if (List[i] > Max)
            Max = List[i];
    }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", List[i]);
    }
    putchar('\n');
    printf("MAX: %d\n", Max);
    
    return 0;
}