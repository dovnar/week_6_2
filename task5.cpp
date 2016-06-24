#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int nambercude, namberin, square, namber;

	cout << "Введите число: ";
	cin >> namberin;
	namber = namberin;
	square = namberin  * namberin;

	while (namberin > 0)
	{
		nambercude += namberin % 10;
		namberin /= 10;
	}
	if ((nambercude = nambercude * nambercude * nambercude) == square)
	{
		cout << "куб суммы цифр " << namber << " числа равен квадрату этого числа";
	}
	else
	{
		cout << "куб суммы цифр " << namber << " числа неравен квадрату этого числа";
	}
	return 0;
}



/*Пользователь вводит целое число А. Программа должна определить, что куб суммы цифр этого числа равен А*А */