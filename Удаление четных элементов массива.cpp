#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int mas[100];
    int size = 5;
    for (int i = 0; i < size; i++)
        mas[i] = rand() % 10;
    for (int i = 0; i < size; i++)
        cout << mas[i] << " ";
    
    for (int i = 0; i < size; i++)
    {
        if (mas[i] % 2 == 0)
        {
            
            for (int j = i; j < size; j++)
            {
                mas[j] = mas[j + 1];
            }
            size--;
            i--;
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << mas[i] << " ";
    
    return 0;
}