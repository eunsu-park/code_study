// p.145
#include <stdio.h>

int main()
{
    int Input, Total = 0;

    scanf("%d", &Input);
    Total += Input;
    scanf("%d", &Input);
    Total += Input;
    scanf("%d", &Input);
    Total += Input;

    printf("Total : %d\n", Total);
    
    return 0;
}