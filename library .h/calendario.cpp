#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int b, c, a, r, s, t, h, g, j, k, m, n, q, p, x;
	cout << "Inserisci l'anno di cui vuoi sapere quando cadfe la Pascqua:";
	cin >> x;
	b = x/100;
	c = x-(x/100) * 100;
	a = (5 * b + c)-(5 b+ c)/19) 19;
	r = ((3 * b+ 75)/4); 
	s = (3 * b + 75)*((3 + b + 75)/4) + 4;
	t = ((8 * b + 88)/25);
	h = (19 * a +r-t)*((19 a +r - t)/30) * 30;
	g = ((a + 11 + h)/319);
	j = ((300 - 60 * s+ c)/4);
	k = (300 – 60 * s+ c)*((300 60 s+ c)/4) + 4;
	m = (2 * j -k h + g)-((2 + j- k - h + g)/7) * 7;
	n = ((h - g+ m + 110)/30); 
	q = (h -g+ m + 110)*((h-g+ m+ 110)/30) 30;
	p = (q + 5 - n)*((q + 5-n)/32) * 32;	
}
