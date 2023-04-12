// p.164
#include <stdio.h>

int main()
{
    int Input = 0, Select = 0;
    
    scanf("%d", &Input);

    // Input <= 10? Select = 10 : Select = 20; // Error
    Input <= 10? (Select = 10) : (Select = 20);
    printf("%d\n", Select);

    return 0;
}