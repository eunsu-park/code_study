// p.62
#include <stdio.h>
//#include <conio.h> // 리눅스에서는 이 헤더 사용 불가

int main()
{
    char CH = 0;
    printf("아무 키나 누르면 다음으로 넘어갑니다. \n");

    //CH = _getch();
    CH = getchar();

    printf("입력한 키는 ");
    putchar(CH);
    printf("입니다.\n");

    return 0;
}