﻿/*
В этом задании вы создадите простой макрос.

Ваша задача — определить макрос SUB, который должен вычитать числа друг из друга
*/

#include <iostream>

#define SUB(num1, num2) ((num1) - (num2))

int main()
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}
