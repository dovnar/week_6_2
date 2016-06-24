#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int divider = 2, namber, total;

	cout << "Пользователь вводит целое число. выводим все целые числа, на которое заданное число делиться без остатка." 
		"\n" "Введите число: ";
	cin >> namber;
	cout << "числа на которые делиться без остатка = ";
	while (divider <= namber)
	{
		total = namber % divider;
		if (total == 0)
		{
			cout << divider << "; ";
		}
		divider++;
	}
	return 0;
}





/*Пользователь вводит целое число. Необходимо вывести все целые числа, на которое заданное число делиться без остатка. */