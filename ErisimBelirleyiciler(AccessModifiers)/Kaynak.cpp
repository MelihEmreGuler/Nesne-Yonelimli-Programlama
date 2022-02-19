#include <iostream>
using namespace std;
//ACCESS MODÝFÝER
//bir özelliðe veya bir metoda nasýl eriþileceðini belirleyen yapý.
// 3 tane temel access modifier vardýr. (public, private, protected)
class yemek {
public: // public kelimesi bie access modifier dir tam olarak. // bir kalori deðiþkenine nasýl eriþileceðini belirliyor.
	double kalori;
	int fiyat;
	int gram;
	int isitmak(int sure) {//ýsýtýlan cisimlerin kalorisi artar.
		if (sure < 300)
			kalori += sure;// belli ir sureye kadar artsýn malum eonra yanmaya baslýyor.
		else
			kalori = 0; // yanmis bir yemegi kimse yemek istemez.
		return 0;
	}
private: // o sýnýfa özel bilgi þeklinde düþünülebilir.

};

class insan {
public:
	int boy;
	double kilo;
	int yas;
	int yemek(yemek y) { // bu method yemek eylemidir. ve parametresi de yemek tipinden tanýmlanmýþ bir obje. 
						 // sandvic mi yeyecek baþka bir þey mi yeyecek onu bilmediðimiz için y diyoruz sadece.
						 // sarý renkte olan method un ismi olan yemek. 
						 // yesil olan class olan yemek.(burdaki "yemek y" objesi yemek class ýndan tanýmlanmýþ bir obje olacak.

		kilo += y.kalori / 7000;
		return 0;
	}
	int f(int x) {
		return x + 10;
	}
	void maasBastir() {
		cout << "Benim maasim: " << maas << endl;
	}
private: // sadece o class ýn eriþebildiði bilgilerdir. //main bloðunda veli.maas þeklinde eriþmeye çalýþýsak hata alýrýz.
	int maas = 500; // maas kiþinin kendisinin bilebileceði bir bilgi oludðundan bu bilgiye sadece kisinin kendisi eriþebilir.

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
	ali.yemek(sandvic); //bu kilo þu anda alinin objesinden çaðýrýldýysa alinin kilosunu artýrýyor.
	cout << "boy: " << ali.boy << " kilo: " << ali.kilo << " yas: " << ali.yas << endl;

	insan veli;
	veli.boy = 170;
	veli.kilo = 70;
	veli.yas = 25;
	cout << "boy: " << veli.boy << " kilo: " << veli.kilo << " yas: " << veli.yas << endl;

	sandvic.isitmak(50);

	veli.yemek(sandvic); //bu kilo þu anda velinin objesinden çaðýrýldýysa velinin kilosunu artýrýyor.
	cout << "boy: " << veli.boy << " kilo: " << veli.kilo << " yas: " << veli.yas << endl;

	// sandvic insaný deðiþtirmiþ oldu. 
	// veli sandvicini ýsýtarak yedi için kilosu ufak bir miktar daha fazla arttý.
	
	cout << "maas bastir methoduyla cagirdigimiz private maas bilgisi: ";
	veli.maasBastir(); cout << endl;

}
