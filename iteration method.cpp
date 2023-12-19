#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

const double epsilon = 0.0001;

double f(double x)
{
	return log(exp(-x) + 2);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, x0, x1;

	a = 0;
	b = 1;

	x0 = (a + b) / 2;
	x1 = f(x0);

	int k = 2;

	while (abs(x1 - x0) > epsilon)
	{
		x0 = x1;
		x1 = f(x0);

		k = k + 1;
	}
	cout << "Корень: " << x1 << endl;
	cout << "Количество шагов: " << k << endl;

	return 0;
}

