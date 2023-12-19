#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

double const epsilon = 0.0001;

double f(double x)
{
	return exp(x) - exp(-x) - 2;
}

double first(double x)
{
	return exp(x) + exp(-x);
}

double second(double x)
{
	return exp(x) - exp(-x);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, x0, x1;

	a = 0;
	b = 1;

	if (f(a) * second(a) > 0)
	{
		x0 = a;
	}
	else
	{
		if (f(b) * second(b) > 0)
		{
			x0 = b;
		}
	}

	x1 = x0 - f(x0) / first(x0);

	int k = 2;

	while (abs(x1 - x0) > epsilon)
	{
		x0 = x1;
		x1 = x0 - f(x0) / first(x0);

		k = k + 1;
	}
	cout << "Корень: " << x1 << endl;
	cout << "Количество шагов: " << k << endl;

	return 0;
}
