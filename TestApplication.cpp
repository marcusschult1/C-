// TestApplication.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Eingabe: ";

    int x = 0;
    int anzahl = 0;
    int gro = 0;

    while (x != -1) {
        cin >> x;
        anzahl++;
        if (x > 1000) {
            gro++;
        }
    }

    cout << "Ausgabe: Anzahl: " << anzahl << ", Zahlen groesser 1000: " << gro;

}
