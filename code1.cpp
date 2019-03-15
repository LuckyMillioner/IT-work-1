5/*
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

double module (double a)
{
	if (a <= 0)
	{
		return a*(-1);
	}
	return a;
}

/*
@example (Арифметическая последовательность) 3 A 4, 7, 11, 15;
@param (a) a0, (b) разность арифметичской прогрессии;
@ return 0;
*/

int gProg(double a, double b)
{
	int res_mult, res_sum, n;
	for (double i = a; i < n; a+b)
	{
		res_mult*=a;
		res_sum+=a;
	}
	return res_mult, res_sum;
}

int main ()
{
	double a, b, res=0;
	int *error;
	char z;
	cin >> a;
	cin >> z;
	cin >> b;
	switch (z)
	{
		case '+' :
			cout << a+b;
			break;
		case '-' :
			cout << a-b;
			break;
		case '*' :
			cout << a*b;
			break;
		case '/' :
			if (0 == b)
			{
				*error = -1;
				cout << "Cannot be devide by zero" << endl;
				return 0;
			}
			cout << a/b;
			break;
		case '%' :
			if (0 == b)
			{
				*error = -2;
				cout << "Cannot be devide by zero" << endl;
				return 0;
			}
			cout << divide1;
			break;
		case 'M' :
			cout << module;
			break;
		case 'A' :
			cout << gProg;
			break;
		default :
			cout << "Sorry unckown command";
	}
	return 0;
}
