#include <iostream>
#include <math.h>
#include "Quadrato.h"


using namespace std;

Quadrato::Quadrato(double lato): Rettangolo(lato,lato) {}

double Quadrato::calcolaArea() {
	return pow(l1,2);
}
double Quadrato::calcolaPerim() {
	return l1 * 4;
}