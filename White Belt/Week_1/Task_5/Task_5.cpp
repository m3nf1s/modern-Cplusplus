﻿/*
 * Написать программу вычисления стоимости покупки с учётом скидки.
 * Скидка в X процентов предоставляется, если сумма покупки больше A рублей, в Y процентов - если сумма больше B рублей.
 * В стандартном вводе содержится пять вещественных чисел, разделённых пробелом: N, A, B, X, Y (A < B) - где N - исходная стоимость товара.
 * Выведите стоимость покупки с учётом скидки.
 */
 
#include <iostream>

using namespace std;

int main()
{
	double n, a, b, x, y;

	cin >> n >> a >> b >> x >> y;


	if (n > 0 && a > 0 && b > 0 && x > 0 && y > 0 && x <= 100 && y <= 100)
	{
		if (a < b && x < y)
		{
			if (n < a)
				cout << n << endl;
			else
				if (n >= a && n < b)
					cout << n * (100 - x) / 100 << endl;
				else
					if (n >= b)
						cout << n * (100 - y) / 100 << endl;
		}
	}
}