#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int h1[26]{ 1,2,3 };
	int h2[26]{ 5,6,7,8,9,4,4 };
	int s = 0;
	setlocale(LC_ALL, "RU");
	for (int i = 0; i < 26; i++) s = s + h1[i] + h2[i];
	cout << "Общее количество мячей " << s;
}


#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int zab[15]{ 1,2,3,5,5,5,5 };
	int prop[15]{ 5,6,7,8,9,4,4 };
	int s = 0;
	setlocale(LC_ALL, "RU");
	for (int i = 0; i < 15; i++) {
		string s = (zab[i] > prop[i]) ? "Победа" : "Проигрыш";
		cout << s << endl;
	}

}


#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int zab[14]{ -3,3,-4,4,-5,5,-6,6,-7,7,-8,8,-9,9 };
	int m1[14]{ 0 }, m2[14]{ 0 };
	int s = 0;
	setlocale(LC_ALL, "RU");
	for (int i = 0; i < 14; i++) {
		if (zab[i] > 0) {
			m1[i] = zab[i];
		}
		else m2[i] = zab[i];
	}
	cout << "Основной массив:" << endl;
	for (int i = 0; i < 14; i++) cout << zab[i] << " ";
	cout << '\n' << "Второй массив:" << '\n';
	for (int i = 0; i < 14; i++) cout << m1[i] << " ";
	cout << '\n' << "Третий массив:" << '\n';
	for (int i = 0; i < 14; i++) cout << m2[i] << " ";
}