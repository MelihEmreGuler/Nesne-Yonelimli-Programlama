#include <iostream>
using namespace std;
//Encapsulation Kapsülleme
class dikdortgen {
private: // bu özellikleri private yap yani dýþarýdan kimse eriþemesin
	// main fonksiyonunun içerisinde boyunu 150 yapamayým 
	int boy;
	int en;
public:
	int alan();
	int cevre();
	
	int getBoy();// getter metodunun genel olarak dondurdüðü tip deðiþkenin tipidir.
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
	// a.boy = 150; privateye eriþemezsin. getter/setter metotlarýný tanýmlamam lazým 
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