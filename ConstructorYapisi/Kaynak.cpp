#include<iostream>
using namespace std;
//Constructor, Destructure 
//yapici ve yikici / inþaa ve yýkým
//bir class ta tanimli olan ilk metotlardir
//ozel bir method dur
class insan {
private:
	int boy;
	int	kilo;
public:
//ilk insanin olusturuldugu zaman calisacak method.
	insan() {//Constructorun return type ý yoktur.
		boy = 10;
		kilo = 1;
	}//Method overloading yapalim.
	insan(int boy) {
		this->boy = boy;
	}
	insan(int boy, int kilo) {
		this->boy = boy;
		this->kilo = kilo;
	}
	void SetBoy(int boy) {
		this->boy = boy;
	}
	int GetBoy() {
		return boy;
	}
//Destructor
	~insan() {
		//bu kadarýyla bilmemiz yeterli dedi //veri yapilari video serisine devam ederseniz orada kritik diyor
	}
};

int main() {
	insan ali; //alinin constructoru
	insan veli(170, 70);
	insan mehmet(180);
	cout << "alinin boyu:" << ali.GetBoy() << " velinin boyu:" << veli.GetBoy() << " mehmetin boyu:" << mehmet.GetBoy() << endl;
}