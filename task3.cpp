#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int namberout = 0, namberin;

	cout << "Введите число: ";
	cin >> namberin;

	while (namberin > 0)
	{
		if (namberin % 10 != 3 &&
			namberin % 10 != 6)
		{
			namberout *= 10;
			namberout += namberin % 10;
		}
		namberin /= 10;
	}

	cout << "Полученное число: ";

	while (namberout > 0)
	{
		cout << namberout % 10;
		namberout /= 10;
	}
	cout << endl;
	return 0;
}


/*Пользователь вводит любое целое число. Необходимо из этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран.*/