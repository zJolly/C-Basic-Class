#include<iostream>
#include<count.h>
using namespace std;
// programa principale
main(){
    int n; 
    cout<<"inserisci n \t";
    cin>>n;
     CONT conta;//istanzio l'oggetto c di tipo CONT classe padre
     for(int i=0;i<n;i++) conta.plus();
     conta.out();
}//__________fine main

 


//abbiamo dovuto implementare anche un metodo out() per
 //effettuare la lettura di valore altrimenti non visibile dato che è 'privato'.
