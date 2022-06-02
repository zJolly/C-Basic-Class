#include<iostream>
using namespace std;
//classe astrata
class CONT {//(contatore)
private:    
     int valore;//attributo
public:
     void plus(); // metodo1 
     void out(); //metodo2 
     CONT();// mrtodo costruttore ha nome della classe 
};
// metodo1 
void CONT::plus(){
     valore=valore+1;
}
//metodo 2
void CONT::out(){
     cout << valore;
}

 

CONT::CONT(){//implementazione del costruttore
     valore=0;
}
// programa principale
main(){
    int n; 
    cout<<"inserisci n \t";
    cin>>n;
     CONT conta;//istanzio l'oggetto c di tipo CONT classe padre
     for(int i=0;i<n;i++) 
	 conta.plus();
     conta.out();
}//__________fine main

 


//abbiamo dovuto implementare anche un metodo out() per
 //effettuare la lettura di valore altrimenti non visibile dato che è 'privato'.
