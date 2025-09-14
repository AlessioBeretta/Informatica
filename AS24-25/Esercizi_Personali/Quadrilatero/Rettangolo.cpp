#include <iostream>
#include <math.h>
#include "Rettangolo.h"


using namespace std;

Rettangolo::Rettangolo(double base, double altezza): Quadrilatero(base,altezza,base,altezza) {}

double Rettangolo::calcolaArea() {
	return l1 * l2;
}
double Rettangolo::calcolaPerim() {
	return 2 * (l1 + l2);
}