/*
Код с дополнительными и сложными вычислениями
Проектное задание №0
Калькулятор на языке Си с возможностями:
Сложение, вычитание, умножение, деление, деления двух чисел нацело со взятием остатка,
вывод модуля числа (запрещено использовать fabs из math.h/cmath), арифметическая последовательность

@author lucky_millioner
@linl https://github.com/LuckyMillioner/IT-work-1
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/

#include <iostream>
#include <cmath>

using namespace std;

/*
@example (Деление чисел) 7 / 7 = 1;
@param (a) делимое, (b) делитель, (*error) код ошибки;
@return a/b || 0;
@throws (0) ошибок нет, (-1) ошибка деления на 0 | *error;
*/

double divide (double a, double b, int *error)
{
	if (0 == b)
	{
		*error = -1;
		cout << "Cannot be devide by zero" << endl;
		return 0;
	}
	return a/b;
}

/*
@example (Деление двух чисел нацело с остатком) 8 % 3 = 2;
@param (a) делиоме, (b) делитель, (*error) код ошибки;
@return a/b || 0;
@throws (0) ошибок нет, (-2) ошибка деления на 0 | *error;
*/

int divide1 (int a, int b, int *error)
{
	if (0 == b)
	{
		*error = -2;
		cout << "Cannot be devide by zero" << endl;
		return 0;
	}
	return a%b;
}

/*
Функция модуля числа
@example module(-5); // 5
@param double a - исходное число
@return double |a|
*/

double module (double a)
{
	if (a <= 0)
	{
		return a*(-1);
	}
	return a;
}
