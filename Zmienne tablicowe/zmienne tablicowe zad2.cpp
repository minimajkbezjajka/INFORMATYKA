#include <iostream>
using namespace std;

int main() {
    

    for (int i = 0; i < 5; i++) {
        cout << "Podaj " << i + 1 << ". liczbę całkowitą: ";
        cin >> tablica[i];
    }
    for (int i = 0; i < 5; i++) {
        if (tablica[i] < 0) {
            tablica[i] = 0;
        }
    }

   
    cout << "Zmodyfikowana tablica: ";
    for (int i = 0; i < 5; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}

