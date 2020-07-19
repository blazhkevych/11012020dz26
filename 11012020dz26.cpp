/*
*** Пользователь 	вводит с клавиатуры дробное число.Округлить его до двух знаков после 	запятой и вывести на экран.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double a, b;
	cout << "Введите дробное число: ";
	cin >> a;
	b = int(a * 100 + 0.5) / 100.0;
	cout << "Дробное число округленное до двух знаков после запятой: " << b << "\n\n\n";
	return 0;
}
