#pragma once
#include "Organizm.h"

class Zwierze :
	public Organizm
{
public:
	void akcja(int wymiarX, int wymiarY) override; // ruch
	bool kolizja(Organizm* organizm) override; // walka lub rozmana¿anie
	Zwierze();
	~Zwierze();
};

