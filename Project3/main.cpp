#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a four-digit number: ";
	cin >> num;
	
	if (num < 1000 || num > 9999) {
		cout << "Error! The number is not four-digit!" << endl;
	}
	else {
		int first = num / 1000;
		int second = num / 100 % 10;
		int third = num / 10 % 10;
		int fourth = num % 10;
		int newNum = second * 1000 + first * 100 + fourth * 10 + third;
		cout << "New number: " << newNum << endl;
	}
}