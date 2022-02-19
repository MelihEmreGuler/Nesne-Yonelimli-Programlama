#include<iostream>
using namespace std;
//Miras Kalitim Inheritance 
class insan {
protected: // inheritance eden class in bu bilgilere sadece metotlar uzerinden erismesine izin veriyor (private tamamen kapali yani sadece o class tan erisime izin veren bir access modifierdir.
	int boy;
	int kilo;
	string adres;
public : 
	int yemek() {//bu metotlar da benzer sekilde public gecirilebiliyor.
			kilo++;
			return 0;
	}
	int setKilo(int a) {
		kilo = a;
		return 0;
	}
};
class calisan : public insan { //calisan class inin hangi access modifier ile insan classina erisecegini seçmemiz lazim. basina public yaziyorum 
public :
	int maas;
	int zam(int x) {//bu metotlar da benzer sekilde public gecirilebiliyor.
		maas += x;
		kilo = 100; //eger private olsaydi insan class indaki ozellikler, bu method ta kiloya erisemezdik. 
		return 0;
	}
	void printKilo() {
		cout << "kilo:" << kilo;
	}
	
};

int main() {
	insan ali;
	//ali.boy = 180;
	//cout << ali.boy << endl;
	
	calisan veli; 
	veli.maas = 5000;
	//veli.boy = 170; // veli bir calisan calisan da bir insan olduguna göre onun da bir boyu var.
	//veli.kilo = 65;
	//cout << "veli kilo:" /* << veli.kilo  << " boy:" << veli.boy << " maas:" << veli.maas << endl;*/
	veli.setKilo(65);
	veli.printKilo();
	cout << " velinin maasi:" << veli.maas << endl;
	veli.zam(500);
	veli.yemek();
	cout << "veli yeni "; veli.printKilo();
	cout << " veli yeni maas:" << veli.maas << endl;
	//cout << "veli yeni kilo:" /* << veli.kilo */ <<" boy:" << veli.boy << " yeni maas:" << veli.maas << endl;

	return 0;
}