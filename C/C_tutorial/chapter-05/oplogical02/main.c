// p.157
#include <stdio.h>

int main()
{
    int Input = 0, Result = 0;
    
    scanf("%d", &Input);
    Result = Input > 3 && Input < 20;
    printf("Result : %d (1:True, 0:False)\n", Result);

    return 0;
}