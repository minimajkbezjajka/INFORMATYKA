#include <iostream>
using namespace std;
float Suma(int liczba,int liczba1){
float wynik;

wynik=liczba+liczba1;
return wynik;
}
int main(){
cout << "Wybierz fukncje ";

cout<<"\n1. Suma";
cout <<"\n2. Roznica";
cout<<"\n3. Iloczyn";
cout<< "\n4. Ioraz";
cout << "\n0. Wyjscie";
cout << "\n wybrana fukncja";
int funkcja;
cin >> funkcja;
float liczba;
float liczba1;
cout <<"\n wybierz 1 liczbe ";
cin >> liczba;
cout <<"\n wybierz 2 liczbe ";
cin >> liczba1;
switch(funkcja) {
	case 1:
	cout<< Suma(liczba,liczba1);
		break;	
	case 2:
		break;	
	case 3:
		break;	
	case 4:
		break;	
	case 0:
			
		break;	
}



}

