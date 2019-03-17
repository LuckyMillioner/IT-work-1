/*
@example (Арифметическая последовательность) 3 A 4, 7, 11, 15;
@param (a) a0, (b) разность арифметичской прогрессии;
@ return 0;
*/

#include <iostream>

void gProg(double a0, double b)
{
	int n=0;
	double res_sum = a0, res_mult = a0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a0 += b;
		res_mult *= a0;
		res_sum += a0;
	}
	cout << n+1 << ' ' << res_sum << endl;
	cout << n+1 << ' ' << res_mult << endl;
}
