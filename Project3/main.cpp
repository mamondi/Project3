#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;

	cout << "Enter a first number: ";
	cin >> num1;

	cout << "Enter a second number: ";
	cin >> num2;

	if (num1 > num2) {
		cout << num2 << " is smallest" << endl;
	}
	else if (num1 < num2) {
		cout << num1 << " is smallest" << endl;
	}
	else {
		cout << "Both numbers are equal" << endl;
	}
	
}