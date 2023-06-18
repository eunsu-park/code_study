// p.341
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

int PrintMenu(void)
{
    int Input = 0;

    // system("clear");
    printf("[1]New\t[2]Search\t[3]Print\t[4]Remote\t[0]Exit\n:");
    scanf("%d", &Input);

    return Input;
}


int main()
{
    int Menu = 0;

    while ((Menu = PrintMenu()) != 0)
    {
        switch (Menu)
        {
            case 1:
                puts("새 항목을 추가합니다.");
                break;

            case 2:
                puts("기존 항목에서 검색합니다.");
                break;

            case 3:
                puts("전체 내용을 출력합니다.");
                break;

            case 4:
                puts("기존 항목을 삭제합니다.");
                break;

            default:
                puts("알 수 없는 명령입니다.");
        }

        getchar();
    }

    puts("Bye~~!");

    return 0;
}  