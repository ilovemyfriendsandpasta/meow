#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, space, star;
	
	cout << "Введите количество звезд в основания треугольника: ";
	cin >> n;
	
	while (!((n > 0) && (n % 2 == 1) && (n > 3)))
	{
		cout << "Ваше значение не подходит, введите новое: ";
		cin >> n;
	}

	space = (n - 1) / 2;
	star = 1;

	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		cout << endl;

		for (int j = 1; j <= space; j++)
		{
			cout << "  ";
		}
		space--;
		
		for (int k = 1; k <= star; k++)
		{
			cout << "* ";
		}
		star = star + 2;
	}
	return 0;
}
