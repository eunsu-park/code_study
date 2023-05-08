// p.344
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

int GetFee(int Age)
{
    int Fee = 1000;

    if (Age < 20) Fee /= 20;

    return Fee;
}

int PrintMenu(void)
{
    int Input = 0;

    // system("clear");
    printf("[1]New\t[2]Search\t[3]Print\t[4]Remote\t[0]Exit\n:");
    scanf("%d", &Input);

    return Input;
}

int GetAge(void)
{
    int Age = 0;

    printf("나이를 입력하세요. : ");
    scanf("%d", &Age);
    return Age;
}

int main()
{
    int Menu = 0, Age = 0;

    while ((Menu = PrintMenu()) != 0)
    {
        if (Menu == 1)
        {
            Age = GetAge();
            printf("요금은 %d원 입니다.\n", GetFee(Age));
            getchar();
        }
    }

    puts("Bye~~!");

    return 0;
}  