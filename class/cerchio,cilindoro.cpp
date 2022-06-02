#include<iostream>
using namespace std;

class A{
	private:
		int x;
	public:
		A();	
		void inserisci();
		void visualizza();
};

void A::inserisci(){
	cin >> x;
	cout<<x;
}
void A::visualizza(){
	cout <<"x=" << x;
}
 A::A(){
	x=0;
}

int main(){
	A input;
    A output;
	input.inserisci();
	output.visualizza();
}
