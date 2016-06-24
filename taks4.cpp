#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	int namber, b=2;

	cout << "Выводим все целые числа В, для которых А делиться без остатка на В*В и не делиться без остатка на В*В*В" "\n"
		"введите любое целое число А ";
	cin >> namber;

	if (namber > 3)
	{
		cout << "числа соответствующие условиям = ";
	}
	else
	{
		cout << "нет таких чисел";
		return 1;
	}
	
	for (namber; namber >= b*b; b++)
	{
		if (namber % (b*b) == 0 &&
			namber % (b*b*b) != 0)
		{
			cout << b << ", ";
		}
	}
	cout << endl;
	return 0;
}


/*Пользователь вводит любое целое число А. Необходимо вывести все целые числа В, 
для которых А делиться без остатка на В*В и не делиться без остатка на В*В*В*/
