// p.201
#include <stdio.h>

int main()
{
    int Input = 0;
    char ch = 'A';

    printf("점수를 입력하세요. : ");
    scanf("%d", &Input);

    if (Input >= 90)
        ch = 'A';
    else if (Input >= 80)
        ch = 'B';
    else if (Input >= 70)
        ch = 'C';
    else if (Input >= 60)
        ch = 'D';
    else
        ch = 'F';

    printf("점수: %d, 학점: %c\n", Input, ch);
    
    return 0;
}