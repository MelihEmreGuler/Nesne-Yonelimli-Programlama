#include<iostream>
using namespace std;
class insan {
public:
	int boy;
	int kilo;
	void yemek(int kilo) {
		this->kilo += kilo;
	}
};

int main() {
	int* p;
	insan ali;
	ali.boy = 180;
	insan* g;

	g = &ali;

	cout << ali.boy << endl;
	cout << g->boy << endl;
	ali.boy = 190;
	cout << g->boy << endl;
	g->boy = 185;
	cout << g->boy << endl;
	g->kilo = 70; 
	cout << g->kilo << endl;
	g->yemek(5);
	cout << g->kilo << endl;
}