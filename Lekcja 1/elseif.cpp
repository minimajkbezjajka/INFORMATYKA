#include <iostream>	
using namespace std;
int main(){
int ocena;
cout << "podaj ocene";
cin>> ocena;
if ((ocena >=0) && (ocena <= 49)) {
cout << "ocena nie dostateczna"; 
}
else if ((ocena >=50) && (ocena <= 69)) {
cout << "ocena dostateczna";
}

else if ((ocena >=70) && (ocena <=84)) {
cout << "ocena dobra";
}



else if ((ocena >=85) && (ocena <=99)){
cout << "ocena dobra";
}
else if ((ocena >= 100) && (ocena <= 100))
cout << "ocena celujaca";


	
}


	
	

	
