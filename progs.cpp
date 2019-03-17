/*
��� � ��������������� � �������� ������������
��������� ������� �0
����������� �� ����� �� � �������������:
��������, ���������, ���������, �������, ������� ���� ����� ������ �� ������� �������,
����� ������ ����� (��������� ������������ fabs �� math.h/cmath), �������������� ������������������

@author lucky_millioner
@linl https://github.com/LuckyMillioner/IT-work-1
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/

#include <iostream>
#include <cmath>

using namespace std;

/*
@example (������� �����) 7 / 7 = 1;
@param (a) �������, (b) ��������, (*error) ��� ������;
@return a/b || 0;
@throws (0) ������ ���, (-1) ������ ������� �� 0 | *error;
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
@example (������� ���� ����� ������ � ��������) 8 % 3 = 2;
@param (a) �������, (b) ��������, (*error) ��� ������;
@return a/b || 0;
@throws (0) ������ ���, (-2) ������ ������� �� 0 | *error;
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
������� ������ �����
@example module(-5); // 5
@param double a - �������� �����
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
