#pragma once
#include <list>
#include "Organizm.h"
#include <vector>

class Organizm;
class Swiat
{
protected:
	// rozmiary swiata
	int x=20;
	int y = 20;
	int numerTury = 0;
public:
	friend class Organizm;
	void SetRozmiar(int x, int y);
	int getRozmiarX();
	int getRozmiarY();
	void wykonajTure(Organizm *& organizm);// int numerTury);
	void mapa(Organizm *& organizm);
		
	Swiat(Organizm *& organizm);
	//Swiat(int x, int y); 
	~Swiat();
};

