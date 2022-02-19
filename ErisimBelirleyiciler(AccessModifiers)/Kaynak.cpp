#include <iostream>
using namespace std;
//ACCESS MOD�F�ER
//bir �zelli�e veya bir metoda nas�l eri�ilece�ini belirleyen yap�.
// 3 tane temel access modifier vard�r. (public, private, protected)
class yemek {
public: // public kelimesi bie access modifier dir tam olarak. // bir kalori de�i�kenine nas�l eri�ilece�ini belirliyor.
	double kalori;
	int fiyat;
	int gram;
	int isitmak(int sure) {//�s�t�lan cisimlerin kalorisi artar.
		if (sure < 300)
			kalori += sure;// belli ir sureye kadar arts�n malum eonra yanmaya basl�yor.
		else
			kalori = 0; // yanmis bir yemegi kimse yemek istemez.
		return 0;
	}
private: // o s�n�fa �zel bilgi �eklinde d���n�lebilir.

};

class insan {
public:
	int boy;
	double kilo;
	int yas;
	int yemek(yemek y) { // bu method yemek eylemidir. ve parametresi de yemek tipinden tan�mlanm�� bir obje. 
						 // sandvic mi yeyecek ba�ka bir �ey mi yeyecek onu bilmedi�imiz i�in y diyoruz sadece.
						 // sar� renkte olan method un ismi olan yemek. 
						 // yesil olan class olan yemek.(burdaki "yemek y" objesi yemek class �ndan tan�mlanm�� bir obje olacak.

		kilo += y.kalori / 7000;
		return 0;
	}
	int f(int x) {
		return x + 10;
	}
	void maasBastir() {
		cout << "Benim maasim: " << maas << endl;
	}
private: // sadece o class �n eri�ebildi�i bilgilerdir. //main blo�unda veli.maas �eklinde eri�meye �al���sak hata al�r�z.
	int maas = 500; // maas ki�inin kendisinin bilebilece�i bir bilgi olud�undan bu bilgiye sadece kisinin kendisi eri�ebilir.

};
int main() {
	yemek sandvic;
	sandvic.kalori = 233;
	sandvic.fiyat = 10;
	sandvic.gram = 100;

	insan ali; //nesne
	ali.boy = 180;
	ali.kilo = 80;
	ali.yas = 24;

	cout << "boy: " << ali.boy << " kilo: " << ali.kilo << " yas: " << ali.yas << endl;
	ali.yemek(sandvic); //bu kilo �u anda alinin objesinden �a��r�ld�ysa alinin kilosunu art�r�yor.
	cout << "boy: " << ali.boy << " kilo: " << ali.kilo << " yas: " << ali.yas << endl;

	insan veli;
	veli.boy = 170;
	veli.kilo = 70;
	veli.yas = 25;
	cout << "boy: " << veli.boy << " kilo: " << veli.kilo << " yas: " << veli.yas << endl;

	sandvic.isitmak(50);

	veli.yemek(sandvic); //bu kilo �u anda velinin objesinden �a��r�ld�ysa velinin kilosunu art�r�yor.
	cout << "boy: " << veli.boy << " kilo: " << veli.kilo << " yas: " << veli.yas << endl;

	// sandvic insan� de�i�tirmi� oldu. 
	// veli sandvicini �s�tarak yedi i�in kilosu ufak bir miktar daha fazla artt�.
	
	cout << "maas bastir methoduyla cagirdigimiz private maas bilgisi: ";
	veli.maasBastir(); cout << endl;

}
