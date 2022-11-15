#include <iostream>

using namespace std;

double Calc(int km, int usage);

int main() {
	double a = Calc(432, 12);
	cout << a << endl;


	return 0;
}

double Calc(double km, double usage) {		//call by value

	if (km > 0 && usage > 0) {
		return usage * 100.0 / km;
	}
	else {
		return 0.0;
	}

}
// call by reference, keine Kopie der Parameter , 
// keine Änderung der Params zulässig wg const. damit effizienter

double Calc(double const & km, double const & usage) {		
	if (km > 0 && usage > 0) {
		return usage * 100.0 / km;
	}
	else {
		return 0.0;
	}

}