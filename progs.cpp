#include <iostream>

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
