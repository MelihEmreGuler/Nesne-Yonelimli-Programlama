#include <iostream>
using namespace std;
class dikdortgen {
private:
	int boy;
	int en;
public:
	void SetBoy(int);
	void SetEn(int);
	int GetBoy();
	int GetEn();
	dikdortgen operator-(const dikdortgen&);
};

void dikdortgen::SetBoy(int boy) {
	this->boy = boy;
}
void dikdortgen::SetEn(int en) {
	this->en = en;
}
int dikdortgen::GetBoy() {
	return boy;
}
int dikdortgen::GetEn() {
	return en;
}
dikdortgen dikdortgen::operator-(const dikdortgen& d) {
	dikdortgen DDortgen;
	DDortgen.boy = this->boy - d.boy;
	DDortgen.en = this->en - d.en;
	return DDortgen;
}
int main() {
	dikdortgen x;
	dikdortgen y;
	dikdortgen fark;
	x.SetBoy(10);
	x.SetEn(5);
	y.SetBoy(4);
	y.SetEn(1);
	fark.SetBoy(0);
	fark.SetEn(0);
	fark = x - y;
	cout << "boy:" << fark.GetBoy() << " en:" << fark.GetEn() << endl;
}

