#include "Wilk.h"


char Wilk::rysowanie()
{
	return 'W';
}


Wilk::Wilk(int pozycjaX, int pozycjaY)
{
	sila = 9;
	inicjatywa = 5;
	gatunek = 'wilk';
	setPozycja(pozycjaX, pozycjaY);
}


Wilk::~Wilk()
{
}
