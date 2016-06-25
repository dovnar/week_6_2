#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int namber = 100, namber1, namber2, namber3, count=0;

	cout << "Подсчитаем количество целых чисел в диапазоне от 100 до 999 у которых есть две одинаковые цифры" "\n";

	do
	{
		namber1 = namber / 100;
		namber2 = namber % 100 / 10;
		namber3 = namber % 10;
		if (namber1 == namber2&&
			namber1 != namber3 ||
			namber1 == namber3&&
			namber1 != namber2 ||
			namber2 == namber3&&
			namber1 != namber2)
		{
			count++;
		}
		namber++;
	} while (namber >= 100 &&
		namber <= 999);

	cout << "в диапазоне от 100 до 999 = " << count << " чисел" "\n";
	return 0;
}



/*Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых есть две одинаковые цифры*/
