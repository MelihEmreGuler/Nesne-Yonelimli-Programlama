#include<iostream>
using namespace std;
class Sekil {
	protected:
		int en;
		int boy;
	public:
		Sekil() {
			en = 0;
			boy = 0;
		}
		Sekil(int en, int boy) {
			if (en < 0)
				this->en = 0;
			if (boy < 0)
				this->boy = 0;
			if (en >= 0 && boy >= 0) {
				this->en = en;
				this->boy = boy;
			}
		}
		void SetEn(int en) {
			this->en = en;
		}
		void SetBoy(int boy) {
			this->boy = boy;
		}
		virtual int alan() = 0; //ABSTRACT METHOD
};
class Dikdortgen : public Sekil {
	public:
		Dikdortgen() :Sekil() {}
		Dikdortgen(int en, int boy) :Sekil(en, boy) {}
		//Dikdortgen() {//Constructor lar public olur.
		//	en = 0;
		//	boy = 0;
		//}
		//Dikdortgen(int en, int boy) {
		//	this->en = en;
		//	this->boy = boy;
		//}
		int alan() {//override (tanimli olan bir metodu overloading yapmadan ayni þekliyle ustune yazma.)
		//inheritance iliþkisi olduðunda override yapabiliyoruz.
		//yukaridan gelen alan methodunu ustune bindirdim
		//yukaridan sekilden gelen alan metotunu ben begenmiyorum kullanmayacagim. Kendi alanimi kendim yeniden tanimliyorum diyorum
			cout << "Dikdortgen den Alan:";
			return en * boy;
		}
};
class Ucgen : public Sekil {
	public:
		Ucgen() :Sekil() {}
		Ucgen(int en, int boy) :Sekil(en, boy) {} //super constructer (bir ustteki constructoru cagiriyor)
		//Ucgen() {
		//	en = 0;
		//	boy = 0;
		//}
		//Ucgen(int en, int boy) {
		//	this->en = en;
		//	this->boy = boy;
		//}
		int alan() {//override
			cout << "Ucgen den alan:";
			return en * boy / 2;
		}
};
int main() {
	Dikdortgen d1;
	d1.SetBoy(3);
	d1.SetEn(5);
	cout << d1.alan() << endl;
	Dikdortgen d2(4, 6);
	cout << d2.alan() << endl;
	Ucgen u(4, 5);
	Dikdortgen d(4, 5);
	cout << "ucgen alani:" << u.alan() << endl;
	cout << "Dikdortgen alani:" << d.alan() << endl;

	Sekil* s;
	s = &u;
	cout << "seklin alani(ucgen):" << s->alan() << endl;

	s = &d;
	cout << "seklin alani(dikdortgen):" << s->alan() << endl;






}