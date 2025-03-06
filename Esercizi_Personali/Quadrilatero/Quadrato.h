#include <iostream>
#ifndef QUADRATO_H
#define QUADRATO_H
#include "Rettangolo.h"

class Quadrato : public Rettangolo {
	public:
		Quadrato(double lato);
		double calcolaArea() override;
		double calcolaPerim() override;
};
#endif