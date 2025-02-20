#include <iostream>
using namespace std;
int main(){
	int tablica[5];
	for (int i = 0; i < 5; i++) {
		cout << "Podaje liczbe nr " << i+1 << "' ";
		cin >> tablica [i];
	}
	cout << "\nPodane liczby to:\n";
	for (int i = 0; i <5; i++){
		cout << tablica[i] << " ";
	}
	int suma = 0;
	for (int i = 0; i <5; i++){
		suma +=tablica[i];
	}
		int srednia= suma/5;
	
	cout << "\nSrednia="<< srednia;
	
	
	
	
	
	
	
}