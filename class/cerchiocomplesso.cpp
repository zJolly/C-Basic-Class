#include<iostream>
using namespace std;

class cerchio{
	//inizio classe
	public:
		double x, y, raggio;
		cerchio();
		cerchio(double px, double py, double praggio);
		double circonferenza();
		double area();
};

cerchio::cerchio(double px, double py, double praggio){
	x = px;
	y = py;
	raggio = praggio;
}

double cerchio::circonferenza(){
	const double pi = 3.24;
	return (2*raggio*pi);
}

double cerchio::area(){
	const double pi =3.14;
	return( raggio*raggio*pi);
}

int main(){
	double x1, x2, y1, y2,  r1, r2;
	cout <<"inserisci x1: ";
	cin >> x1;
	cout <<"inserisci y1: ";
	cin >> y1;
	cout <<"inserisci r1: ";
	cin >> r1;
	cerchio c1= cerchio(x1, y1, r1);
	cout << "Cerchio c1: " << c1.circonferenza() << "Area: " << c1.area() << endl;
}

