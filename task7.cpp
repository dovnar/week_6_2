#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int divider = 2, namber, namber1;

	cout << "Пользователь вводит два целых числа. выводим все целые числа, на которые оба введенных числа делятся без остатка."
		"\n" "Введите 1-ое число : ";
	cin >> namber;
	cout << "Введите 2-ое число: ";
	cin >> namber1;
	cout << "числа на которые делиться без остатка = ";
	while (divider <= namber ||
		divider <= namber1)
	{
		if (namber % divider == 0 &&
			namber1 % divider == 0)
		{
			cout << divider << "; ";
		}
		divider++;
	}
	cout << endl;
	return 0;
}

/*Пользователь вводит два целых числа. Необходимо вывести все целые числа, на которые оба введенных числа делятся без остатка. */
