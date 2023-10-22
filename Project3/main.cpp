#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "Enter a six-digit number: ";
	cin >> num;

	if (num < 100000 || num > 999999) {
		cout << "Error: number is not six-digit" << endl;
		return 0;
	}

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++) {
		sum1 += num % 10;
		num /= 10;
	}
	for (int i = 0; i < 3; i++) {
		sum2 += num % 10;
		num /= 10;
	}

	if (sum1 == sum2) {
		cout << "The number is lucky" << endl;
	}
	else {
		cout << "The number is not lucky" << endl;
	}

	return 0;

}