#include <iostream>
using namespace std;
class insan {
public:
	int boy;
	int kilo;
	int yas;

};
int main() {
	insan ali; //nesne
	ali.boy = 180;
	ali.kilo = 80;
	ali.yas = 24;
	
	cout << "boy: " << ali.boy << " kilo: " << ali.kilo << " yas: " << ali.yas << endl;
	
	insan veli;
	veli.boy = 170;
	veli.kilo = 70;
	veli.yas = 25;
	
	cout << "boy: " << veli.boy << " kilo: " << veli.kilo << " yas: " << veli.yas << endl;


}