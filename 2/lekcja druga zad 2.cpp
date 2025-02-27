#include <iostream>
using namespace std;

int main() {
    float masa_ciala, wzrost, bmi;


    cout << "Podaj swoja mase ciala w kilogramach: ";
    cin >> masa_ciala;
    cout << "Podaj swoj wzrost w metrach: ";
    cin >> wzrost;


    bmi = masa_ciala / (wzrost * wzrost);


    cout << "Twoje BMI wynosi: " << bmi << endl;
    
	if (bmi < 18.5) {
        cout << "Kategoria: Niedowaga" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Kategoria: W normie" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Kategoria: Nadwaga" << endl;
    } else {
        cout << "Kategoria: Otylosc" << endl;
    }

    return 0;
}
