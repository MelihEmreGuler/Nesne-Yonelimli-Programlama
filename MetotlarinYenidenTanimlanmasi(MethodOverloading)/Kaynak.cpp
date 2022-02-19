#include <iostream>
using namespace std;
//OVERLOADÝNG
//Prosedurel dillerde uzerine tanimlama diye bir sey yoktur. 
//Bir fonksiyonun tekrar tanimlanmasi bir hatadir.(ayni isme sahip iki metot olmasi hatadir
//parametre bazinda bir fonksiyonu overload edebiliriz
class insan {
private:
	int boy;
	int kilo;
public:
	void setBoy(int x) {
		boy = x;
	}
	void setBoy(float x) {
		boy = x * 100;
	}
	void setBoy(int x, int y) {
		boy = x;
		kilo = y;
	}
	int getBoy() {
		return boy;
	}
	int getKilo() {
		return kilo;
	}
};

int main() {
	insan ali;
	ali.setBoy(180);
	cout << ali.getBoy() << endl;
	float b = 1.85;
	ali.setBoy(b);
	cout << ali.getBoy() << endl;
	ali.setBoy(185, 85);
	cout << ali.getKilo() << endl;
}