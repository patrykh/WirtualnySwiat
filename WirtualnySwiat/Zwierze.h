#pragma once
#include "Organizm.h"
class Swiat;
class Zwierze :
	public Organizm
{
public:
	void akcja(int wymiarX, int wymiarY) override; // ruch
	bool kolizja(Organizm* organizm) override; // walka lub rozmanażanie
	Zwierze(Swiat* swiat);
	~Zwierze();
};

