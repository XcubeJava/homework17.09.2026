#include <iostream>
#include <Windows.h>

void one()
{
    int number;
    std::cout << "Задание 1 Введите шестизначное число ";
    std::cin >> number;

    if (number < 100000)
    {
        std::cout << "Ошибка число не шестизначное\n";
        return;
    }
    if (number > 999999)
    {
        std::cout << "Ошибка число не шестизначное\n";
        return;
    }

    int one = number / 100000;
    int two = number / 10000 % 10;
    int three = number / 1000 % 10;
    int four = number / 100 % 10;
    int five = number / 10 % 10;
    int six = number % 10;

    if (one + two + three == four + five + six)
        std::cout << "Число счастливое\n";
    else
        std::cout << "Число не счастливое\n";
}

void two()
{
    int number;
    std::cout << "Задание 2 Введите четырехзначное число ";
    std::cin >> number;

    if (number < 1000)
    {
        std::cout << "Ошибка число не четырехзначное\n";
        return;
    }
    if (number > 9999)
    {
        std::cout << "Ошибка число не четырехзначное\n";
        return;
    }

    int one = number / 1000;
    int two = number / 100 % 10;
    int three = number / 10 % 10;
    int four = number % 10;

    std::cout << "Результат " << two << one << four << three << "\n";
}

void three()
{
    int one, two, three, four, five, six, seven;

    std::cout << "Задание 3 Введите 7 чисел ";
    std::cin >> one >> two >> three >> four >> five >> six >> seven;

    int max = one;

    if (two > max)
        max = two;
    if (three > max)
        max = three;
    if (four > max)
        max = four;
    if (five > max)
        max = five;
    if (six > max)
        max = six;
    if (seven > max)
        max = seven;

    std::cout << "Максимальное число " << max << "\n";
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    one();
    two(); // тут гугл в помощь
    three();

    return 0;
}