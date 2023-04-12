// p.198
#include <stdio.h>

int main()
{
    int Input = 0;
    scanf("%d", &Input);

    if (Input > 10)
    {
        int Input = 20;
        printf("%d\n", Input);

        if (Input < 20)
        {
            int Input = 30;
            printf("%d\n", Input);
        }
    }

    printf("%d\n", Input);
    
    return 0;
}