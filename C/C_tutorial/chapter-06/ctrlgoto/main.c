// p.210
#include <stdio.h>

int main()
{
    int Input ;

INPUT:
    printf("Input number : ");
    scanf("%d", &Input);

    if (Input < 0 || Input > 10)
        goto INPUT;

    puts("End");
    
    return 0;
}