
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int k = 0, z = 0;
int main()
{
	setlocale(LC_ALL, "rus");
	int mas[5][8]{{ 5,6,7,8,9 },{ 5,6,7,8,9 },{ 5,6,7,8,9 },{ 5,6,7,8,9 },{ 5,6,7,8,9 }
};
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 8; i++)
		{
			cout << mas[j][i] << " ";
		}
		cout << endl;
	}
	cout << "Введите курс: ";
	cin >> k;
	for (int i = 0; i < 8; i++)
	{
		z += mas[k-1][i];
	}
	cout << z;
}