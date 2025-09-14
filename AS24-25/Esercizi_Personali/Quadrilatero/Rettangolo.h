#include <iostream>
#ifndef RETTANGOLO_H
#define RETTANGOLO_H
#include "Quadrilatero.h"


class Rettangolo : public Quadrilatero {
	public:
		Rettangolo(double base, double altezza);
		virtual double calcolaArea();
		virtual double calcolaPerim() override;
};
#endif