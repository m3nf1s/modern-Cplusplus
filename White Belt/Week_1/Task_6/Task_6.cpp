﻿/*
 * Дано два целых числа A и B (A <= B, A >= 1, B <= 30000).
 * Выведите через пробел все чётные числа от A до B (включительно).
 * Для проверки целого числа x на чётность используется операция взятия остатка от деления на 2, которая в C++ оформляется с помощью символа "%".	
 */
 
#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	if (a >= 1 && b <= 30000 && a < b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % 2 == 0)
				cout << i << " ";
		}
	}
}