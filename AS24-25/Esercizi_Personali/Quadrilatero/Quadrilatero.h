#include <iostream>
#ifndef QUADRILATERO_H
#define QUADRILATERO_H

using namespace std;

class Quadrilatero {
	protected:
		double l1,l2,l3,l4;
		public:
			Quadrilatero(double l1,double l2);
			Quadrilatero(double l1,double l2,double l3,double l4);
			void setLato(double l1 = 4, double l2 = 5, double l3 = 2, double l4 = 1) {
				this -> l1 = l1;
				this -> l2 = l2;
				this -> l3 = l3;
				this -> l4 = l4;
			}
			void getLato();
			virtual double calcolaPerim();
};
#endif