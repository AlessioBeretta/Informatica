#include <iostream>
#include <math.h>
#include "Quadrilatero.h"

using namespace std;

void Quadrilatero:: getLato() {
	cout << l1;
	cout << l2;
	cout << l3;
	cout << l4;
		
}
double Quadrilatero :: calcolaPerim() {
	return l1 + l2 + l3 + l4;
} 

Quadrilatero::Quadrilatero(double l1,double l2, double l3, double l4) {
	this -> l1 = l1;
	this -> l2 = l2;
	this -> l3 = l3;
	this -> l4 = l4;
}