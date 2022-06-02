#include <iostream>
#include <cmath>
 using namespace std;
 
 class quadrato{
 	public:
 		double lato, posx, posy;
 		quadrato();
 };
 
 quadrato::quadrato(){
 	lato = 1;
 	posx = 0;
 	posy = 0;
 }
 
 class insieme{
 	public:
 		quadrato q1, q2;
 		int intersezione(quadrato q1, quadrato q2);
 		double areacondivisa(quadrato q1, quadrato q2);
 };
 
 int insieme::intersezione(quadrato q1, quadrato q2){
 	int f = 0;
 	//Verifica se le due aree dei quadrati combaciano
 	if(((q1.posx <= q2.posx)&&((q1.posx+q1.lato) > q2.posx)) || ((q1.posx+q1.lato) >= (q2.posx+q2.lato) && (q1.posx < (q2.posx+q2.lato)))){
 		if(((q1.posy >= q2.posy)&&((q1.posy-q1.lato) < q2.posy)) || ((q1.posy-q1.lato) <= (q2.posy-q2.lato) && (q1.posy > (q2.posy-q2.lato)))){
 			cout << "I due quadrati hanno un'area o parziale area condivisa!";
 			f = 1;
		 } 
		 else {
		 	cout << "I due quadrati non hanno un'area o parziale area condivisa!" << endl;
		 	system("pause");
		 	system("cls");
		 	cout << "Errore! Errore! Errore! Errore! Errore! " << endl << "Prova con altre aree... Fine" << endl;
		 }
	} 
	else {
		 	cout << "I due quadrati non hanno un'area o parziale area condivisa!" << endl;
		 	system("pause");
		 	system("cls");
		 	cout << "Errore! Errore! Errore! Errore! Errore! " << endl << "Prova con altre aree... Fine" << endl;
		 }
	return f;	 
 }
 
 double insieme::areacondivisa(quadrato q1, quadrato q2){
 	double  areax = 0, areay = 0;
 	int flag_x = 0, flag_y = 0;
 	//Primo caso: "Quando si trova completamente alll'interno uno all'altro"
 	if(q1.lato > q2.lato){
	 	if(((q1.posx+q1.lato) >= (q2.posx+q2.lato))&&(q1.posx <= q2.posx)){
 			areax = q2.posx;
 			flag_x = 1;
	 	}
	 	if((q1.posy >= q2.posy)&&((q1.posy-q1.lato) <= (q2.posy+q2.lato))){
	 		areay = q2.posx;
	 		flag_y = 1;
		 }
	 } 
	 else{
	 	if(((q2.posx+q2.lato) >= (q1.posx+q1.lato))&&(q2.posx <= q1.posx)){
 			areax = q1.posx;	
			flag_x = 1; 	
	 		}
	 		if((q2.posy >= q1.posy)&&((q2.posy-q2.lato) <= (q1.posy+q1.lato))){
	 		areay = q1.posx;
	 		flag_y = 1;
		 }
	}
	//Uso una flag per evitare che il programma faccia calcoli complessi inutili e quindi si rallenti
	//Secondo caso: "Quando si trovano accavallati"
	/*if(flag_x == 0){
		if()		
	}
	if(flag_y == 0){
		if()		
	}
	*/
 	return (areax*areay);
 }
 
 
  int main(){
  	int flag = 0;
  	double area;
  	insieme ins;
  	quadrato q1, q2;
  	//Inserimento dati (potevo fare una funzione o metterla nella classe)
  	do{
  		cout << "Inserisci la dimensione del lato del primo quadrato:";
  		cin >> q1.lato;
  		system("cls");
	  }while(q1.lato <= 0);
	cout << "Inserisci la coordinata x e poi la y:" << endl;
  	cin >> q1.posx;
  	system("cls");
  	cin >> q1.posy;
  	system("cls");
  	do{
  		cout << "Ora inserisci la dimensione del lato del secondo quadrato:";
  		cin >> q2.lato;
  		system("cls");
	  }while(q2.lato <= 0);
	cout << "Inserisci la coordinata x e poi la y:" << endl;
  	cin >> q1.posx;
  	system("cls");
  	cin >> q1.posy;
  	system("cls");
  	//Verifica dell'effettiva intersezione tra le due aree
  	flag = ins.intersezione(q1, q2);
  	if(flag == 0){
  		area = ins.areacondivisa(q1, q2);
  		cout << "L'area e' di " << area << endl;
	  }
  }
  //Ci ho provato
