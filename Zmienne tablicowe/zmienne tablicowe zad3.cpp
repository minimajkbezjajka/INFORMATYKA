#include <iostream>
using namespace std;

int main() {
int tablica[10];
int min = tablica[0];
for (int i = 0; i < 10; i++) {
	cout << "Podaj " << i + 1 << ". liczbe calkowita";
	cin >> tablica[i];
}
	for (int i = 1; i <10; i++){
		if (tablica[i] <= min) {
			min = tablica[i];
			
		}

	}
	cout<< "\nNajmniesza wartosc w tablicy to " << min << endl;
	
	
	
	
	
}