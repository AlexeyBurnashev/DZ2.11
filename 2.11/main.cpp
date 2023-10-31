#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int q = 1;
	char i = 0;

	while (q) {

		int a = 0;
		int b = 0;
		int c = 0;
		
		cout << endl;
		cout << "Выберите действие (+) (-) (*) (/) (!) (^) (q - выход): ";
		cin >> i;
		cout << endl;

		switch (i) {

		case '+':
			cout << "Введите два числа через пробел: ";
			cin >> a >> b;
			cout << endl;
			c = a + b;
			cout << a << " + " << b << " = " << c << endl;
			break;

		case '-':
			cout << "Введите два числа через пробел: ";
			cin >> a >> b;
			cout << endl;
			c = a - b;
			cout << a << " - " << b << " = " << c << endl;
			break;

		case '*':
			cout << "Введите два числа через пробел: ";
			cin >> a >> b;
			cout << endl;
			c = a * b;
			cout << a << " * " << b << " = " << c << endl;
			break;

		case '/':
			cout << "Введите два числа через пробел: ";
			cin >> a >> b;
			if (b == 0) {
				cout << "на 0 делить нельзя!" << endl;
				cout << "Введите два числа через пробел: ";
				cout << endl;
				cin >> a >> b;
			}
			cout << endl;
			cout << a << " / " << b << " = " << float (a)/b << endl;
			break;

		case '!':
		{
			int i = 1;
			long long f = 1;
			cout << "Введите число для факториала: ";
			cin >> a;
			cout << endl;

			if (a < 0)
				return f = 0;
			if (a == 0)
				return f = 1;
			else
				while (i < a)
				{
					f *= ++i;
				}

			cout << a << "!" << " = " << f << endl;
			break;
		}
			
		case '^':
		{
			int m = 1;
			cout << "Введите два числа через пробел: ";
			cin >> a >> b;
			cout << endl;
			for (int i = 1; i <= b; i++) {
			
				m *= a;
			}

			cout << a << " ^ " << b << " = " << m << endl;
			break;
		}
			
		case 'q':
			q = false;
			break;

		default:
			cout << endl;
			cout << "введите (+) (-) (*) (/) (!) (^) (q - выход)" << endl;
			break;

		}
	}


	return 0;
}



