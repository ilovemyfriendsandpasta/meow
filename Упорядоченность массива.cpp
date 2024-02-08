#include <iostream>
#include <stdlib.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int mas[100], n, t;
	cout << "Введите кол-во элементов: ";
	do {
		cin >> n;
	} while (n < 2 || n > 100);
	int j = 0;
	do {
		cout << "Введите элемент: ";
		cin >> t;
		mas[j] = t;
		j += 1;
	} while (j < n);

	cout << endl;
	j = 0;
	bool flag = true;
	while ((flag == true) && (j < n - 1))
	{
		if (mas[j] >= mas[j + 1])
		{
			flag = false;
			cout << "Последовательность не упорядочена" << endl;
		}
		j++;
	}
	if (flag == true)
		cout << "Последовательность упорядочена" << endl;
	return 0;
}

