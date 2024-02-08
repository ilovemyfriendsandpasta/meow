#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	const int n = 3, m = 3;
	int mas2[n][m];
	/*
	3 0 8
	7 2 1
	5 9 6
	*/
	int mas[n * m * 2] = { 7,2,1, 3,0,8, 5,9,6,    8,1,6, 3,7,5, 0,2,9 };

	for (int i = 0; i < n * m; i += m)
		for (int j = n * m; j < n * m * 2; j++)
		{
			if (mas[i] == mas[j])
			{
				int s = (j - n * m) % n;
				for (int k = 0; k < m; k++)
					mas2[s][k] = mas[k + i];
			}
		}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			cout << mas2[i][j] << " ";
		cout << endl;
	}
}
