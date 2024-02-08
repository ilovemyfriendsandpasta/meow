#include <iostream>
#include <stdlib.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	const int n = 5;
	int mas[n];
    cout << "Массив: ";
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 10 - 5;
		cout << mas[i] << " ";
	}
	int max = mas[0];
	int imax = 0;
	for (int i = 1; i < n; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
			imax = i;
		}
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] == mas[imax])
		{
			k += 1;
		}
	}
	int sum = k * max;
	cout << endl << "Максимальный элемент массива: " << max;
    cout << endl << "Порядковый номер максимального элемента: " << imax + 1;
    cout << endl << "Количество максимальных элементов: " << k;
    cout << endl << "Сумма максимальных элементов: " << sum;
	return 0;
}

