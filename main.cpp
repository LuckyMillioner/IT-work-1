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
#include 'progs'
#include 'arifProg'
using namespace std;

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
