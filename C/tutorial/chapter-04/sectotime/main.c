// p.146
#include <stdio.h>

int main()
{
    int Sec = 0;
    scanf("%d", &Sec);

    printf("%d 초는 %02d시간 %02d분 %02d초 입니다.\n", Sec, Sec/3600, Sec%3600 / 60, Sec % 60);
   
    return 0;
}