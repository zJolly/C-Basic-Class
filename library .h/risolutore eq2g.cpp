#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a, b, c, d, x1, x2;
	cout << "Inserici il valore di a:" << endl;
	cin >> a;
	cout << "Inserici il valore di b:" << endl;
	cin >> b;
	cout << "Inserici il valore di c:" << endl;
	cin >> c;
	system("cls");
	cout << "ora poduciamo il delta!" << endl;
	d = b*b-4*a*c;
	if(d > 0){
		cout << "Il delta è maggiore di 0 quindi ha due zeri! D:" << d << endl;
		x1 = (-b+sqrt(d))/2*a;
		x2 = (-b-sqrt(d))/2*a;
		cout << "Risultati:" << endl;
		cout <<"X 1,2=" << x1 << " e " << x2 << endl;
		
	}
	if(d == 0){
		cout << "Il delta è uguale a 0 quindi ha un solo risultato!" << endl;
		x1 = (-b+sqrt(d))/2*a;
		cout <<"X 1,2=" << x1 << endl;
	}
	if(d < 0){
		cout << "Il delta è minore di 0 quindi ha numeri complessi!" << endl;
		x1 = (-b+sqrt(d))/2*a;
		x2 = (-b-sqrt(d))/2*a;
		cout <<"X 1,2=" << x1 << "e" << x2 << endl;
	}
	system("pause");
}

