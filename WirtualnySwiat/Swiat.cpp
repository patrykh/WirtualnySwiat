#include "Swiat.h"
#include <vector>
#include <iostream>
#include "Wilk.h"

using namespace std;

void Swiat::SetRozmiar(int x, int y)
{
	// granice swiata
	this->x = x;
	this->y = y;
}

int Swiat::getRozmiarX()
{
	cout << "getRozmiarX";
	return this->x;
}

int Swiat::getRozmiarY()
{
	cout << "getRozmiarY";
	return this->y;
}

void Swiat::wykonajTure(Organizm *& organizm)//int numerTury)
{
	// TODO metoda sortowanie

	// pêtla po liœcie organizmów
	// if czy zyje -> akcja() else -> brak
	// usun martwe organizmy
	cout << "wykonajTure";
<<<<<<< HEAD
	organizm->sortujOrganizmy();
	//auto aktualneOrganizmy = this->Organizmy;
	for (auto o : o->Organizmy)
=======
	this->sortujOrganizmy();
	auto aktualneOrganizmy = this->Organizmy;
	for (auto organizm : aktualneOrganizmy)
>>>>>>> parent of cfc2680... Migracja metod
	{
		cout << "wykonajTure_for";
		if (o->getCzyZyje())
		{
			cout << "wykonajTure_if";
<<<<<<< HEAD
			o->akcja(wymiarX, wymiarY);
		}
	}
	cout << "wykonajTure koniec";
	organizm->usunMartweOrganizmy();
	numerTury++;
}

void Swiat::mapa(Organizm *& organizm)
=======
			organizm->akcja();
		}
	}
	cout << "wykonajTure koniec";
	this->usunMartweOrganizmy();


}

void Swiat::sortujOrganizmy()
{
	this->Organizmy.sort([](Organizm* lewy, Organizm* prawy)
	{
		if (lewy->getInicjatywa() > prawy->getInicjatywa())
		{
			return true;
		}
		else if (lewy->getInicjatywa() == prawy->getInicjatywa())
		{
			if (lewy->getWiek() > prawy->getWiek())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	});
}

void Swiat::usunMartweOrganizmy()
{
	this->Organizmy.remove_if([](Organizm* organizm)
	{
		if (organizm->getCzyZyje() == false)
		{
			delete organizm; // TODO czy delete jest potrzebne??
			return true;
		}
		else
		{
			return false;
		}
	});
}

Organizm* Swiat::czyKolizja(int polozenieX, int polozenieY)
{
	std::cout << "czyKolizja_start";
	for (auto organizm : this->Organizmy)   // organizm*
	{
		std::cout << "czyKolizja_for";
		if (organizm->getCzyZyje() 
			&& organizm->getPozX() == polozenieX 
			&& organizm->getPozY() == polozenieY)
		{
			std::cout << "czyKolizja_ret_org";
			return organizm;
		}
	}
	std::cout << "czyKolizja_ret_nullptr";
	return nullptr;

	//Pokombinowaæ??
	//Organizm* organizm;

	//if (polozenieX == organizm->getPozX() && polozenieX == organizm->getPozX())
	//{
	//	return organizm;
	//}
	//return nullptr; // Gdy nie ma organizmu
}

Swiat::Swiat()
>>>>>>> parent of cfc2680... Migracja metod
{
	vector< vector<char> > mapa(20, vector<char>(20, '+'));
	
	/*for (size_t i = 0; i < mapa.size(); ++i) {
		for (size_t j = 0; j < mapa.at(i).size(); ++j)
			mapa.at(i).at(j) = '2';
	}*/
	
	//Wypelnienie organizmami
<<<<<<< HEAD

	for (auto o : o->Organizmy)
=======
	this->listaOrganizmow();
	for (auto organizm : this->Organizmy)
>>>>>>> parent of cfc2680... Migracja metod
	{
		mapa.at(o->getPozX()).at(o->getPozY()) = o->rysowanie();
	}

	//Wyswietlenie
	for (size_t i = 0; i < mapa.size(); ++i) {
		for (size_t j = 0; j < mapa.at(i).size(); ++j)
			cout << mapa.at(i).at(j) << ' ';

		cout << endl;
	}
<<<<<<< HEAD
	cout << endl;
}

Swiat::Swiat(Organizm *& organizm)
{
	organizm->listaOrganizmow();
	this->mapa(organizm);

}

//Swiat::Swiat(int x, int y)
//{
//	vector< vector<char> > mapa(x, vector<char>(y, '+'));
//	this->listaOrganizmow();
//	for (auto organizm : this->Organizmy)
//	{
//		mapa.at(organizm->getPozX()).at(organizm->getPozY()) = organizm->rysowanie();
//	}
//	//Wyswietlenie
//	for (size_t i = 0; i < mapa.size(); ++i) {
//		for (size_t j = 0; j < mapa.at(i).size(); ++j)
//			cout << mapa.at(i).at(j) << ' ';
//
//		cout << endl;
//	}
//}

=======

	
}

Swiat::Swiat(int x, int y)
{
	vector< vector<char> > mapa(x, vector<char>(y, '+'));
	this->listaOrganizmow();
	for (auto organizm : this->Organizmy)
	{
		mapa.at(organizm->getPozX()).at(organizm->getPozY()) = organizm->rysowanie();
	}
	//Wyswietlenie
	for (size_t i = 0; i < mapa.size(); ++i) {
		for (size_t j = 0; j < mapa.at(i).size(); ++j)
			cout << mapa.at(i).at(j) << ' ';

		cout << endl;
	}
}

>>>>>>> parent of cfc2680... Migracja metod
Swiat::~Swiat()
{

}
