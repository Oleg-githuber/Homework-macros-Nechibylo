#include <iostream>
#include <iomanip>
#include "functions.h"

double add(double num1, double num2) { return num1 + num2; }

void fightingMode()
{
    std::cout << "Работаю в боевом режиме\nВведите число 1: ";
    double num1{};
    std::cin >> num1;
    std::cout << "Введите число 2: " << std::flush;
    double num2{};
    std::cin >> num2;
    std::cout << "Результат сложения: " << std::fixed << std::setprecision(2) << add(num1, num2) << std::endl;
}