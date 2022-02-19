#include <iostream>
using namespace std;
//+,-,*,/ gibi operatorlerin yeniden tanimlanmasi
class dikdortgen {
private:
	int boy;
	int en;
public:
	void SetBoy(int boy) {
		if (boy < 0)
			this->boy = 0;
		else
			this->boy = boy; //this burada bir pointerdir. return *this þeklinde kullanabiliriz.
	}
	void SetEn(int en) {
		this->en = en;
	}
	int GetBoy() const {
		return boy;
	}
	int GetEn() const {
		return en;
	}
	dikdortgen operator+(const dikdortgen &d) {//x ve d dörtgenlerinin toplamarini burada tanimlamis olduk 
		dikdortgen DDortgen;
		DDortgen.boy = this->boy + d.boy;
		DDortgen.en = this->en + d.en;
		return DDortgen;
	}
};

int main() {
	dikdortgen d;
	dikdortgen x;
	dikdortgen toplam;
	
	x.SetBoy(150);
	x.SetEn(50);
	d.SetBoy(180);
	d.SetEn(20);
	toplam.SetBoy(0);
	toplam.SetEn(0);
	
	toplam = x + d;//normalde iki dikdortgen arasinda arti operatoru tanimli degil. Biz operator overloading yaparak (operator+) + operatorunun uzerine yeni bir tanim yukledik.
	
	cout << d.GetBoy() << endl;
	cout << d.GetEn() << endl;
	cout << toplam.GetBoy() << endl;
	cout << toplam.GetEn() << endl;
}