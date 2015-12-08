#pragma once
#include "Organizm.h"

class Roslina :
	public Organizm
{
private:
	char symbol;
	int sila;
public:
	void akcja() override;
	bool kolizja(Organizm* organizm) override;
	Roslina();
	~Roslina();
};

