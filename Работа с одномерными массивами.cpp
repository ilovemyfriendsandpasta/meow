#include <iostream>
#include <stdlib.h>
#include <clocale>

using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    
    int mas[100];
    int n;
    do {
        cin >> n;
    } while (n == 0);
    
    cout << "Количество элементов в массиве: " << n << "\n";
    
    cout << "Массив: ";
    
    for (int i = 0; i < n; i++)
    {
        mas[i] = rand() % 10;
        cout << mas[i] << " ";
    }
    
    int k = rand() % (n - 1);
    
    cout << "\n" << "Индекс элемента (К): " << k << "\n";
    cout << "Массив, напечатанный слева направо с элемента K до K + 1: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << mas[k] << " ";
        k--;
        if (k == -1) k = n - 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (mas[j] < mas[j + 1])
            {
                int t = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = t;
            }
        }
    }
    
    cout << "\n" << "Отсортированный массив по убыванию: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << ' ';
    }

    for (int i = 0; i < n; i++)
    {
        if (mas[i] % 2 == 1)
        {
            n--;
            for (int j = i; j < n; j++)
            {
                mas[j] = mas[j + 1];
            }
            i--;
        }
    }
   
    cout << "\n" << "Массив без нечетных элементов: ";
   
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << ' ';
    }
    k = rand() % (n - 1);
    
    cout << "\n" << "Индекс элемента (К): " << k << "\n";
    cout << "Массив, напечатанный слева направо с элемента K до K + 1: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << mas[k] << ' ';
        k--;
        if (k == -1) k = n - 1;
    }
    
    return 0;
}
