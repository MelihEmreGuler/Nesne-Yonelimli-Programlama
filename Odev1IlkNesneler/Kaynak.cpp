#include <iostream>
using namespace std;

class dikdortgen {
public:
	int en;
	int boy;
	int alan() {
		return en * boy;
	}
	int cevre() {
		return 2 * (en + boy);
	}
};
int main() {
	dikdortgen dd1;
	dd1.en = 50;
	dd1.boy = 100;

	cout << "cevre: " << dd1.cevre() << " alan: " << dd1.alan() << endl;

	dikdortgen dd2;
	dd2.en = 150;
	dd2.boy = 200;

	cout << "cevre: " << dd2.cevre() << " alan: " << dd2.alan() << endl;

}