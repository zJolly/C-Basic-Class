#include <iostream>
#include <cmath>
using namespace std;

float prelievo(float);
float deposito(float);

int main(){
	float saldo, versamento, salvar;
	int fd = 0, fp = 0, s, d;
	cout << "Inserisci il tuo saldo: ";
	cin >> saldo;
	system("cls");
	for(;;){
		cout << "Inerisci 0 o 1:" << endl << "0. Prelievo" << endl << "1. Deposito" << endl;
		cin >> s;
		system("cls");
		switch(s){
			case 0:
				cout << "Stai prelevando..." << endl;
				saldo= prelievo(saldo);
				fp++;
				break;
			case 1:
				cout << "Stai depositando..." << endl;
				saldo = deposito(saldo);
				fd++;
				break;
		}
		cout << "Vuoi ancora depositare o prelevare?" << endl << "Premere:" << endl << "0. Per vedere l'estrattoconto" << endl << "X.Qualsiasi altro numero per prelevare o depositare" << endl;
		cin >> d;
		if(d == 0){
			break;
		}
		system("cls");
	}
	cout << "Ecco l'estrattoconto:" << endl << "Saldo: " << saldo << endl << "N. depositi:" << fd << endl << "N. prelievi: " << fp << endl; 
}

float deposito(float x){
	float y;
	cout << "Inserisci l'importo del deposito: " << endl;
	cin >> y;
	//fare verifica aratteri
	system("cls");
	x = x+y;
	return x;
}

float prelievo(float x){
	float y;
	do{
		cout << "Inserisci l'importo del prelievo: " << endl;
		cin >> y;
		if( y > x)
			cout << "Il prelievo supera il saldo... Inerire un numero uguale o piu' piccolo!" <<endl;
			system("pause");
			system("cls");
	}while(x < y);
	system("cls");
	x = x-y;
	return x;
}
