// p.339
#include <stdio.h>

int GetResult(void)
{
    int Result = 0;
    printf("성적(0~100)을 입력하세요. : ");
    scanf("%d", &Result);
    return Result;
}

char GetGrade(int Score)
{
    if (Score >= 90) return 'A';
    else if (Score >= 80) return 'B';
    else if (Score >= 70) return 'C';
    else if (Score >= 60) return 'D';

    return 'F';
}

int main()
{
    int Result = 0;

    Result = GetResult();
    printf("당신의 학점은 '%c'(%d)입니다.\n", GetGrade(Result), Result);

    return 0;
}  