// p.163
#include <stdio.h>

int main()
{
    int Input = 0, Select = 0;
    
    scanf("%d", &Input);

    Select = Input <= 10 ? 10 : 20;
    printf("%d\n", Select);

    return 0;
}