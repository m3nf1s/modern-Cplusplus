﻿// Task_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
 * Написать программу вычисления стоимости покупки с учётом скидки.
 * Скидка в X процентов предоставляется, если сумма покупки больше A рублей, в Y процентов - если сумма больше B рублей.
 * В стандартном вводе содержится пять вещественных чисел, разделённых пробелом: N, A, B, X, Y (A < B) - где N - исходная стоимость товара.
 * Выведите стоимость покупки с учётом скидки.
 */
int main()
{
	double n, a, b, x, y;

	cin >> n >> a >> b >> x >> y;

	if (n > 0 && a > 0 && b > 0 && x > 0 && y > 0 && x <=100 && y <= 100)
	{
		if (a < b)
		{
			if (n < a)
				cout << n << endl;
			else
				if (n > a && n < b)
					cout << n * (100 - x) / 100 << endl;
				else
					if (n > b)
						cout << n * (100 - y) / 100 << endl;
		}
		else
			cout << "error" << endl;
	}
	else
		cout << "error" << endl;
}

