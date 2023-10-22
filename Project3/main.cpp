#include <iostream>
using namespace std;
//Користувач вводить із клавіатури 7 цілих чисел. Напишіть програму, яка визначає максимальне з цих 7 чисел (Підказка:  розв'язок має бути простим).
int main() {
	int num1, num2, num3, num4, num5, num6, num7;

	cout << "Enter 7 numbers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;

	int max = num1;
	if (num2 > max) max = num2;
	if (num3 > max) max = num3;
	if (num4 > max) max = num4;
	if (num5 > max) max = num5;
	if (num6 > max) max = num6;
	if (num7 > max) max = num7;

	cout << "Max number is " << max << endl;
}