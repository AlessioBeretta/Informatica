#include <iostream>
#include "Quadrilatero.h"
#include "Rettangolo.h"
#include "Quadrato.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	Quadrilatero Q1(4,2,3,5);
	Quadrilatero Q2;
	Q2.getLato();
	
	double perimQu = Q1.calcolaPerim();
	cout << perimQu;
	cout << endl;
/*	Rettangolo R(5,3);
	double areaR = R.calcolaArea();
	cout << areaR;
	cout << endl;
	cout << "Quadrato:";
	cout << endl;
	Quadrato q1(4);
	double areaQ = q1.calcolaArea();
	double perimQ = q1.calcolaPerim();
	cout << areaQ;
	cout << endl;
	cout << perimQ;
	*/
	return 0;
}