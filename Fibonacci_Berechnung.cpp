#include <iostream>

using namespace std;

int main() {


	int n = 0;
	int fib_one = 0;
	int fib_two = 1;
	int erg = 0;

	cout << "Gebe n ein: ";
	cin >> n;

	for (int i = 0; i <= n; i++) {
		erg = fib_one + fib_two;
		cout << erg << endl;
		fib_two = erg;
		fib_one = erg - fib_one;
	}





}
