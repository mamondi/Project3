#include <iostream>
using namespace std;

int main() {
	int AB = 0;
	int BC = 0;
	int weight = 0;
	int fuel = 300;

	cout <<"Distance between points A and B: " << endl;
	cin >> AB;

	cout <<"Distance between points B and C: " << endl;
	cin >> BC;

	cout <<"Weight of cargo: " << endl;
	cin >> weight;

	if (AB < 0 || BC < 0 || weight < 0) {
		cout << "Invalid input" << endl;
		return 0;
	}

	if (weight > 2000) {
		cout << "The cargo is too heavy" << endl;
		return 0;
	}

	if (AB > 1000 || BC > 1000) {
		cout << "The distance is too long" << endl;
		return 0;
	}

	if (weight <= 500) {
		fuel += 100;
	}
	else if (weight <= 1000) {
		fuel += 200;
	}
	else if (weight <= 1500) {
		fuel += 300;
	}
	else if (weight <= 2000) {
		fuel += 400;
	}

	if (AB > 500) {
		fuel += 200;
	}
	if (BC > 500) {
		fuel += 200;
	}

	cout << "The total amount of fuel needed is " << fuel << " liters" << endl;

	return 0;


}