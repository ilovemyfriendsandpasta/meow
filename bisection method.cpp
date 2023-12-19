#include <iostream>
#include <clocale>
#include <cmath> 

using namespace std;

const double epsilon = 0.0001; // точность

double f(double x)
{
    return exp(x) - exp(-x) - 2;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, x;

    a = 0; // левый конец отрезка
    b = 1; // правый конец отрезка

    int k = 0; // шаги

    while (abs(b - a) > epsilon)
    {
        x = (a + b) / 2;

        if (f(a) * f(x) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }

        k = k + 1;
    }

    cout << "Корень: " << (a + b) / 2 << endl;
    cout << "Количество шагов: " << k + 1 << endl;

    return 0;
}
