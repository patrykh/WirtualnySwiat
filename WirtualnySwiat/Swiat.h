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
<<<<<<< HEAD
	friend class Organizm;
	void SetRozmiar(int x, int y);
	int getRozmiarX();
	int getRozmiarY();
	void wykonajTure(Organizm *& organizm);// int numerTury);
	void mapa(Organizm *& organizm);
		
	Swiat(Organizm *& organizm);
	//Swiat(int x, int y); 
=======
	std::list <Organizm*> Organizmy; // ?? sortowanie listy wed�ug inicjatywy (albo wieku?)
	std::vector<std::vector<char> > mapa;
	void SetRozmiar(int x, int y);
	int getRozmiarX();
	int getRozmiarY();

	void dodajOrganizmy(Organizm* nowyOrganizm);
	void listaOrganizmow();
	void wykonajTure();// int numerTury);
	void sortujOrganizmy();
	void usunMartweOrganizmy();
	Organizm* czyKolizja(int polozenieX,int polozenieY);
	Swiat();
	Swiat(int x, int y); 
>>>>>>> parent of cfc2680... Migracja metod
	~Swiat();
};

