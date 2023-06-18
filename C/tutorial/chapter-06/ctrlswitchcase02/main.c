// p.208
#include <stdio.h>

int main()
{
    int Input = 0;
    char Credit = 'X';

    printf("점수를 입력하세요. : ");
    scanf("%d", &Input);

    switch(Input/10)
    {
        case 10:
        case 9:
            Credit = 'A';
            break;
        case 8:
            Credit = 'B';
            break;
        case 7:
            Credit = 'C';
            break;
        case 6:
            Credit = 'D';
            break;
        default:
            Credit = 'F';
    }

    printf("학점 : %c\n", Credit);
    
    return 0;
}