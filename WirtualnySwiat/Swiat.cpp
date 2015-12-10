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
	int wymiarX = this->getRozmiarX();
	int wymiarY = this->getRozmiarY();

	// pêtla po liœcie organizmów
	// if czy zyje -> akcja() else -> brak
	// usun martwe organizmy
	cout << "wykonajTure";
	organizm->sortujOrganizmy();
	//auto aktualneOrganizmy = this->Organizmy;
	for (auto o : o->Organizmy)
	{
		cout << "wykonajTure_for";
		if (o->getCzyZyje())
		{
			cout << "wykonajTure_if";
			o->akcja(wymiarX, wymiarY);
		}
	}
	cout << "wykonajTure koniec";
	organizm->usunMartweOrganizmy();
	numerTury++;
}

void Swiat::mapa(Organizm *& organizm)
{
	vector< vector<char> > mapa(20, vector<char>(20, '+'));

	/*for (size_t i = 0; i < mapa.size(); ++i) {
	for (size_t j = 0; j < mapa.at(i).size(); ++j)
	mapa.at(i).at(j) = '2';
	}*/

	//Wypelnienie organizmami

	for (auto o : o->Organizmy)
	{
		mapa.at(o->getPozX()).at(o->getPozY()) = o->rysowanie();
	}

	//Wyswietlenie
	cout << endl;
	for (size_t i = 0; i < mapa.size(); ++i) {
		for (size_t j = 0; j < mapa.at(i).size(); ++j)
			cout << mapa.at(i).at(j) << ' ';

		cout << endl;
	}
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

Swiat::~Swiat()
{

}
