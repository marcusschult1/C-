#include <iostream>

using namespace std;

int CrossSum(int num);

int main() {

	int num = -1234;

	int sum = CrossSum(num);

	cout << sum << endl;

	//cout << "Erg = " << erg << endl;


	return 0;
}

int CrossSum(int num) {		//call by value
	int remainder = 0;		// Divisonsrest
	int sum = 0;			//Quersumme

	if (num < 0) {
		num = -num;
	}

	while (num > 0) {
		remainder = num % 10;
		sum += remainder;
		num /= 10;
	}

	return sum;
}