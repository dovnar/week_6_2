#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int nambercude = 0, namberin, square, namber = 1;

	cout << "Введите число: ";
	while (namber <= 100000000000)
	{
		namberin = namber;
		square = namberin  * namberin;

		while (namberin > 0)
		{
			nambercude += namberin % 10;
			namberin /= 10;
		}
		if ((nambercude = nambercude * nambercude * nambercude) == square)
		{
			cout << namber << " ";
		}
		square = 0;
		nambercude = 0;
		namber++;
	}
	cout << endl;

	return 0;
}
