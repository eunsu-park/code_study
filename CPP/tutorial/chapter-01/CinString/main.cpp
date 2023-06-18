// p.39
#include <iostream>
#include <cstdio>
#include <string>

int main()
{
    int Age;
    std::cout << "나이를 입력하세요." << std::endl;
    std::cin >> Age;

    char Job[32];
    std::cout << "직업을 입력하세요." << std::endl;
    std::cin >> Job;

    std::string Name;
    std::cout << "이름을 입력하세요." << std::endl;
    std::cin >> Name;

    std::cout << "당신의 이름은 " << Name << " 이고, "
        << "나이는 " << Age << " 살이며, "
        << "직업은 " << Job << " 입니다." << std::endl;

    return 0;
}