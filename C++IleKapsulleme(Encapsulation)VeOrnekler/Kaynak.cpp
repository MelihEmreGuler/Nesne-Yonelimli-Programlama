#include <iostream>
using namespace std;
//Encapsulation Kaps�lleme
class dikdortgen {
private: // bu �zellikleri private yap yani d��ar�dan kimse eri�emesin
	// main fonksiyonunun i�erisinde boyunu 150 yapamay�m 
	int boy;
	int en;
public:
	int alan();
	int cevre();
	
	int getBoy();// getter metodunun genel olarak dondurd��� tip de�i�kenin tipidir.
	void setBoy(int a);
	
	int getEn();
	void setEn(int b);
};

int dikdortgen::alan() {
	return en * boy;
}
int dikdortgen::cevre() {
	return 2 * (en + boy);
}
int dikdortgen::getBoy() {
	return boy;
}
void dikdortgen::setBoy(int a) {
	if (a >= 0)
		boy = a;
	else
		boy = 0;
}
int dikdortgen::getEn() {
	return en;
}
void dikdortgen::setEn(int b) {
	if (b >= 0) //uzunluk negatif olamaz.
		en = b;
	else
		en = 0;
}

int main() {
	dikdortgen a;
	// a.boy = 150; privateye eri�emezsin. getter/setter metotlar�n� tan�mlamam laz�m 
	// a.en = 50;

	//cout << "alan:" << a.alan() << " cevre:" << a.cevre() << " boy:" << a.boy << " en:" << a.en << endl;

	cout << "Lutfen dikdortgenin boyunu giriniz: ";
	int x;
	cin >> x;
	cout << "Lutfen dikdortgenin enini giriniz: ";
	int y;
	cin >> y;

	a.setBoy(x);
	a.setEn(y);

	cout << "alan:" << a.alan() << " cevre:" << a.cevre() << " boy:" << a.getBoy() << " en:" << a.getEn() << endl;

}