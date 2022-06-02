#include<iostream>

using namespace std;

/*int somma(int x, int y){
	int z;
	z = x+y;

	return z;
}*/
void somma(int x, int y){
	int z;
	z = x+y;
	cout << "c = " << z << endl; 
}

int main(){
	int a,b,c;
	cout <<"Inserisci a:";
	cin >> a;
	cout <<"Inserisci b:";
	cin >> b;
	somma(a,b);
}
