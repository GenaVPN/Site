#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//������� 3
	const int num = 5;
	vector<int>mm;
	setlocale(LC_ALL, "RU");
	int mas[num];
	float c = 0;
	//��������� �������� � ������
	for (int i = 0; i < 5; i++) {
		cout << "������� ������� �������: ";
		cin >> mas[i];
	}
	//������� ������� ��������������
	for (int i = 0; i < 5; i++) c += mas[i];
	cout << "������� �������������� ���������� �������: ";
	cout << c / num;
}


#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	const int num = 5;
	vector<int>mm;
	setlocale(LC_ALL, "RU");
	int mas[num] = { 14,15,18,19,24 };
	for (int i = 0; i < 5; i++) {
		if (mas[i] % 10 == 4) mas[i] = mas[i] / 2;
		else if (mas[i] % 2 != 0) mas[i] = pow(mas[i], 2);
	}
	cout << "����� ������:" << '\n';
	for (size_t i = 0; i < 5; i++) cout << mas[i] << " ";
}


#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	const int num = 5;
	vector<int>mm;
	setlocale(LC_ALL, "RU");
	float sr = 0;
	int mas[num] = { 14,-815,18,-19,245 }, MAX = -10000000000, MIN = 2000000000, NUM = 0;
	for (int i = 0; i < 5; i++) {
		MAX = max(mas[i], MAX);
		MIN = min(mas[i], MIN);
	}

	sr = (MAX + MIN) / 2;
	cout << "������� �����. : ";
	cout << sr << '\n';
	for (int i = 0; i < 5; i++) {
		if (mas[i] > sr) {
			cout << "����� �������� " << i + 1 << '\n';
			NUM += 1;
		}
	}
	cout << "���������� ���������: " << NUM;
}