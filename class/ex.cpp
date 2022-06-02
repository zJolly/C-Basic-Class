#include <iostream>
using namespace std;

class fraz{
	public:
		int num, den;
		fraz();		
};

fraz::fraz(){
	num = 0;
	den = 1;
}

int main(){
	fraz a;
	cout << "Inserisci numeratore:";
	cin >> a.num;
	system("cls");
	do{
		cout << "Inserisci denominatore:";
		cin >> a.den;
		system("cls");
	}while(a.den == 0);		
}
