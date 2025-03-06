#include <iostream>
using namespace std;
int main(){
	int liczba;
	cout<< "podaj liczbe ";
	cin>>liczba;
	cout<<endl;
	if (liczba%2==0) {
	cout<< "liczba "<<liczba<<" jest parzysta";
	}
	else{
		 cout<< "liczba "<<liczba<<" nie jest parzysta";
	}
	cout<<endl;
		if (liczba%3==0) {
	cout<< "liczba "<<liczba<<" jest podzielna przez 3";
	}
	else{

		 cout<< "liczba "<<liczba<<" nie jest podzielna przez 3";
	}
	
}