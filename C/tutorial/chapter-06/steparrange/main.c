// p.215
#include <stdio.h>

int main()
{
    int Fee = 1000, Age = 0;
    double Rate = 0.0;

    scanf("%d", &Age);

    if (Age >= 65)
        Rate = 0.0;
    else if (Age >= 20)
        Rate = 1.0;
    else if (Age >= 14)
        Rate = 0.75;
    else if (Age >= 4)
        Rate = 0.5;
    else
        Rate = 0.0;

    printf("최종요금: %d원\n", (int)(Fee * Rate));
        
    return 0;
}