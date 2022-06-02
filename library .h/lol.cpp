#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b= 0;
	cin >> a;
	for(int i=0; i < 100; i++){
		b = b+5;
		cout << a+b << endl;
	}
}
