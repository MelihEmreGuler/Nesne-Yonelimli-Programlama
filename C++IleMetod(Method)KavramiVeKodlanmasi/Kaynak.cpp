#include <iostream>
using namespace std;
class insan {
public:
	int boy;
	int kilo;
	int yas;
	int yemek() {
		kilo++;
		return 0;
	}
	int f(int x) {
		return x + 10;
	}
};
int main() {
	insan ali; //nesne
	ali.boy = 180;
	ali.kilo = 80;
	ali.yas = 24;

	cout << "boy: " << ali.boy << " kilo: " << ali.kilo << " yas: " << ali.yas << endl;
	ali.yemek(); //bu kilo �u anda alinin objesinden �a��r�ld�ysa alinin kilosunu art�r�yor.
	cout << "boy: " << ali.boy << " kilo: " << ali.kilo << " yas: " << ali.yas << endl;

	insan veli;
	veli.boy = 170;
	veli.kilo = 70;
	veli.yas = 25;

	cout << "boy: " << veli.boy << " kilo: " << veli.kilo << " yas: " << veli.yas << endl;
	veli.yemek(); //bu kilo �u anda velinin objesinden �a��r�ld�ysa velinin kilosunu art�r�yor.
	cout << "boy: " << veli.boy << " kilo: " << veli.kilo << " yas: " << veli.yas << endl;
	
	
}