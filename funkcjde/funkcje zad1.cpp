#include <iostream>
using namespace std;
bool cos (int liczba){
	if(liczba%2==0){
		
	return true;
	}
	return false;
}
int main(){
	int liczba1;	
	cin >> liczba1; 
		bool cos2=cos(liczba1); 
		if(cos2==true){
			cout << "parzytsa";
		}else{
			cout << "nie parzysta";
		}
		
}
















