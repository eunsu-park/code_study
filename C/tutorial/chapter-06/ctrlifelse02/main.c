// p.192
#include <stdio.h>

int main()
{
    int Input = 0, Select = 0;
    scanf("%d", &Input);

    if (Input <= 10)
    {
        if (Input < 0)
            Select = 0;
        else
            Select = 10;
    }
    else
    {
        Select = 20;
    }

    printf("%d\n", Select);
    
    return 0;
}