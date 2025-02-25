#include <iostream>
using namespace std;
int main(){
int tablica[3][3];
int suma=0;
int srednia;
cout << "Podaj 9 liczb calkowitych :D\n";
for (int i = 0; i <3; i++) {

for (int j = 0; j <3; j++) {
	cout << "Podaj liczbe dla wiersza " << i+1 << ", kolumny " << j +1 << ": ";
	cin >> tablica[i][j];
}
}
for (int i = 0 ; i < 3; i++){
	for (int j = 0 ; j <3; j++){
	suma += tablica[i][j];
	
}
}
srednia= suma/9;
cout << "\nsrednia podanych liczb wynosi; " << srednia << endl;


}