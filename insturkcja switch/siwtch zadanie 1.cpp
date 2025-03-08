#include <iostream>
using namespace std;

int main() {
    double celsius;
    char jednostka;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;


    cout << "Wybierz jednostke (K - Kelvin, F - Fahrenheit): ";
    cin >> jednostka;

    switch (jednostka) {
        case 'K':
        case 'k': {
            double kelvin = celsius + 273.15;
            cout << "Temperatura w Kelwinach: " << kelvin << " K" << endl;
            break;
        }
        case 'F':
        case 'f': {
            double fahrenheit = (celsius * 9/5) + 32;
            cout << "Temperatura w Fahrenheitach: " << fahrenheit << " °F" << endl;
            break;
        }
        default:
            cout << "Nieprawidłowy wybór jednostki. Wybierz K dla Kelvina lub F dla Fahrenheita." << endl;
            break;
    }

    return 0;
}






