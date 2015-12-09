#pragma once
#include "Swiat.h"
#include <iostream>
class Swiat;
class Organizm
{
protected:
	int sila = 0;
	int inicjatywa = 0;
	int czasZycia = 1;
	bool czyZyje = true;
	int polozenieX = 0, polozenieY = 0; // po³o¿enie
	std::string gatunek;
	//Swiat* swiat = 0;
public:
	//polozenie(x,y)
	//referencja do swiata
	virtual void akcja() = 0;
	virtual bool kolizja(Organizm* organizm) = 0;
	virtual char rysowanie() = 0;

	void gin();


	//Pozycja
	void setPozycja(int x, int y);
	//Organizm* czyKolizja(int polozenieX, int polozenieY);

	int getPozX()		{ return this->polozenieX; }
	int getPozY()		{ return this->polozenieY; }
	int getSila()		{ return this->sila; }
	bool getCzyZyje()	{ return this->czyZyje; };
	int getInicjatywa()	{ return this->inicjatywa; };
	int getWiek()		{ return this->czasZycia; };
	Organizm();
	virtual ~Organizm();
};

