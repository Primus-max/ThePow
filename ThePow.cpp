// Написать рекурсивную функцию нахождения степени числа.


#include <iostream>
#include <windows.h>
using namespace std;

int ThePow(int base, int exponent);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int base = 0, exponent = 0;

	cout << "Для возведения числа в степень, введи целочисленное значение основания и показатель степени";
	cin >> base >> exponent;
	cout << "\n";
	cout << "Число " << base << " в степени " << exponent <<  " = " << ThePow(base, exponent);
}

int ThePow(int base, int exponent) {
	if (exponent == 0)
		return 1;

	return base * ThePow(base, exponent - 1);

}