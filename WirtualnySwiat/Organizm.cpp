#include "Organizm.h"
#include "Wilk.h"

void Organizm::dodajOrganizmy(Organizm* nowyOrganizm)
{
	this->Organizmy.push_back(nowyOrganizm);
}

void Organizm::listaOrganizmow()
{
	this->dodajOrganizmy(new Wilk(2, 5));
	this->dodajOrganizmy(new Wilk(8, 9));
	this->dodajOrganizmy(new Wilk(7, 6));
}

void Organizm::sortujOrganizmy()
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

void Organizm::usunMartweOrganizmy()
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

void Organizm::gin()
{
	czyZyje = false;

}

void Organizm::setPozycja(int x, int y)
{
	this->polozenieX = x;
	this->polozenieY = y;
}


Organizm* Organizm::czyKolizja(int polozenieX, int polozenieY)
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



Organizm::Organizm()
{
}


Organizm::~Organizm()
{
}
