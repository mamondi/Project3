#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	if (num1 == num2) {
		cout << "Numbers are equal" << endl;
	}
	else {
		if (num1 > num2) {
			cout << num2 << " " << num1 << endl;
		}
		else {
			cout << num1 << " " << num2 << endl;
		}
	}
}