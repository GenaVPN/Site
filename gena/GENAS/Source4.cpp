
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char k;
	int k;
	for (int i = 0; i <= 9; i++) {
		switch (k)
		{
		case(0):
			cout << 'Вы знаете что такое "for" в программировании? (1-да, 2- возможно, 3 - нет)' << endl;
			cin >> k;
				if (k == 1)
				{
					cout << "Отлично";
				}
				else if (k == 2)
				{
					cout << "Пойдет";
				}
				else
				{
					cout << "Жаль";
				}
			break;
		case(1):
			break;
		case(2):
			break;
		case(3):
			break;
		case(4):
			break;
		case(5):
			break;
		case(6):
			break;
		case(7):
			break;
		case(8):
			break;
		case(9):
			break;
		default:
			break;
		}
	}



}
