// p.155
#include <stdio.h>

int main()
{
    int Input = 0, Result = 0;
    
    scanf("%d", &Input);
    Result = Input < 4 || Input >= 60;
    printf("Result : %d (1:True, 0:False)\n", Result);

    return 0;
}