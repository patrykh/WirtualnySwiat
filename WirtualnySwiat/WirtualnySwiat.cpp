// WirtualnySwiat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Organizm.h"
#include "Roslina.h"
#include "Swiat.h"
#include "Zwierze.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Swiat *swiat1 = new Swiat();

	swiat1->wykonajTure();
	swiat1->mapa();
	swiat1->wykonajTure();
	swiat1->mapa();
	swiat1->wykonajTure();
	swiat1->mapa();
	swiat1->wykonajTure();
	swiat1->mapa();
	swiat1->wykonajTure();
	swiat1->mapa();
	int x;
	return 0;
}

