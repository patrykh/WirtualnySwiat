#pragma once
#include "Zwierze.h"
class Lis :
	public Zwierze
{
public:
	char getSymbol() override;
	Lis(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Lis();
};

