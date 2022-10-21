#include <iostream>

using namespace std;

int main() {
	int zahl = {};
	
	cout << "Geben Sie eine Primzahl ein: " << endl;
	cin >> zahl;

	int erg = zahl % 2;

	cout << erg << endl;

	bool a = true;

	
	for (int i = 2; i < zahl; i++) {
		if (zahl%i == 0) {
			a = false; 
			break;
		}
	}
	

	if (a == true) {
		cout << "ist Primzahl" << endl;
	}
	else
	{
		cout << "ist keine Primzahl" << endl;
	}


}