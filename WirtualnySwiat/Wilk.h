#pragma once
#include "Zwierze.h"
class Wilk :
	public Zwierze
{
public:
	char rysowanie() override;
	Wilk(int pozycjaX, int pozycjaY);
	~Wilk();
};

