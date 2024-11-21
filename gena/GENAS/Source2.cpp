
#include <iostream>
#include <cstring>
using namespace std;

int m = 0, a[RAND_MAX], l, c = 0;
string s;
int main()
{
	setlocale(LC_ALL, "rus");
	cin >> s;
	int id = 0;
	l = s.length();
	for (int i = 0; i < l; i++) {
		a[id] = s[i] - '0';
		id++;
	}
	for (int i = 0; i < id; i++) {
		m = max(a[i], m);
	}
	for (int i = 0; i < id; i++) {
		(m == a[i]) ? c += 1 : NULL;

	}
	cout << m << " " << c;
}


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a = 1;
	for (int i = 15; i < 26; i++) {
		cout << i << " " << i + 0.5 << " " << i + 0.7 << endl;
	}

}


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	for (int i = 1; i <= 20; i++) {
		cout << i << "$" << '\t' << i * 96.1 << "Р" << '\n';
	}
}


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c = 1;
	setlocale(LC_ALL, "rus");
	cout << "Введите числа a, b: ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) c = c * i;
	cout << "Произведение всех чисел: ";
	cout << c;
}


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введите числа a, b: ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) c = c + pow(i, 2);
	cout << "Сумма квадратов всех чисел: ";
	cout << c;
}



#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	int a, c = 0;
	setlocale(LC_ALL, "rus");
	for (int i = 1; i <= 5; i++) {
		cout << "Введите массу груза №" << i << ": ";
		cin >> a;
		c = c + a;
	}
	cout << "Общая масса: " << c;
}

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a = 1000, c = 0;
	for (int i = 1; i <= 12; i++) {
		if (i <= 10) {
			cout << i << " месяц: " << "Вклад увеличился на " << a * 0.02 << '\t';

		}
		else cout << '\t' << '\t' << '\t' << '\t' << '\t';
		if (i > 2) {
			cout << i << " месяц: " << "Сумма вклада " << a * 0.02;
		}
		cout << '\n';
		a = a + a * 0.02;
	}
}


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float a = 100, p = 0;
	float c = 20;
	for (int i = 1; i <= 8; i++) {
		c = c + c * 0.02;
		cout << "Урожайность за " << i << " год: " << c << " Ц/Га" << '\n';
	}
	cout << '\n';
	for (int i = 1; i < 8; i++) {
		a = a + a * 0.02;
		if (i > 3) {
			cout << "Площадь участка в " << i << " год: " << a << " Га" << '\n';
		}
	}
	cout << '\n';
	a = 100;
	c = 20;
	for (int i = 1; i < 7; i++) {
		a = a + a * 0.02;
		c = c + c * 0.02;
		p = p + (a * c);

	}
	cout << "Собрано урожая за 6 лет: " << p << " Ц" << '\n';
}