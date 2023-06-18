// p.195
#include <stdio.h>

int main()
{
    int Input = 0;
    char ch = 'A';

    printf("점수를 입력하세요. : ");
    scanf("%d", &Input);

    if (Input >= 80)
    {
        if (Input >= 90)
            ch = 'A';
        else
            ch = 'B';
    }
    else
    {
        if (Input >= 70)
            ch = 'C';
        else
            ch = 'D';
            if (Input < 60)
                ch = 'F';
    }

    printf("%c\n", ch);
    
    return 0;
}