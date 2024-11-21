
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	vector<vector<int>> mat(12, vector<int>(10, 2));
	vector<int> m2(5, 2);
	int k = 1;
	int c = 0;
	setlocale(LC_ALL, "RU");
	while (k < 121)
	{
		if (c % 2 == 0) {
			for (int i = 0; i < 12; i++)
			{
				mat[i][c] = k;
				k++;
			}
		}
		else
		{
			for (int i = 11; i >= 0; i--)
			{
				mat[i][c] = k;
				k++;
			}
		}

		c++;
	}

	for (int i = 0; i < mat.size(); i++)
	{
		for (int j = 0; j < 10; j++) cout << mat[i][j] << '\t';
		cout << endl;
	}


}


#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int k = 0, z = 0;
int main()
{
	setlocale(LC_ALL, "rus");
	int mas[5][8]{ { 5,6,7,8,9 },{ 5,6,7,8,9 },{ 5,6,7,8,9 },{ 5,6,7,8,9 },{ 5,6,7,8,9 }
	};
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 8; i++)
		{
			cout << mas[j][i] << " ";
		}
		cout << endl;
	}
	cout << "¬ведите курс: ";
	cin >> k;
	for (int i = 0; i < 8; i++)
	{
		z += mas[k - 1][i];
	}
	cout << z;
}