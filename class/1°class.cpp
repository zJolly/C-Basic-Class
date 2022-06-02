#include <iostream>
using namespace std;

const int MAX=10;
const int MAT=6;
class Voti{
	private:
		double voti[MAX];
	public:
		char materie[MAT][30];
		int n; //numero delle materie e dei voti inseriti
		void inseriscimateria();
		bool caricamentovoto(double v, int p);
		void inizializza();
		double media();
		double max();
		double min();
};

void Voti::inserimentomateria(){
	do{
		cout << "Inserisci il nome della materia oppure invio per terminare." << endl;
		gets(materie[n]);
		n++;
	}while(strcmp(materie[n-1],""):-0); //invio corrisponde a stampa vuota
	n--;
	cout << "inserite " << n << "materie" << endl;
}
