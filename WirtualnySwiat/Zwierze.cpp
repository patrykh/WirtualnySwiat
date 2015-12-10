#include "Zwierze.h"
#include "Swiat.h"
#include <iostream>

void Zwierze::akcja()
{
	std::cout << "akcja1";
	const int ruchy[2] = { -1, 1 }; 
	const char kierunek[2] = { 'x', 'y' };
	Organizm* przeciwnik; 
	int index = 0;
	int ruch = 0;

	bool czyRuszyl = false;
	int proba = 1;

	//polozenie organizmu
	int _polozenieX = polozenieX; 
	int	_polozenieY = polozenieY;
	int wymiarX = 20;// Swiat->getRozmiarX();
	std::cout << "akcja2";
	int wymiarY = 20;// Swiat->getRozmiarY();
	std::cout << "akcja3";
	index = (rand() % 2);
	ruch = ruchy[index];
	std::cout << "akcja4";
	while (!czyRuszyl && proba <= 4) {
		std::cout << "akcja5";
		switch (kierunek[index])
		{
		case 'x':
			std::cout << "akcja6";
			if (_polozenieX + ruch < wymiarX || _polozenieX + ruch > 0)
			{
				std::cout << "akcja7";
<<<<<<< HEAD
				if (this->czyKolizja(_polozenieX + ruch, _polozenieY) == nullptr)
=======
				if (Swiat->czyKolizja(_polozenieX + ruch, _polozenieY) == nullptr)
>>>>>>> parent of cfc2680... Migracja metod
				{
					std::cout << "akcja8";
					this->polozenieX += ruch;
					std::cout << "akcja9";
					czyRuszyl = true;

				} else
				{
<<<<<<< HEAD
					przeciwnik = this->czyKolizja(_polozenieX + ruch, _polozenieY);
=======
					przeciwnik = Swiat->czyKolizja(_polozenieX + ruch, _polozenieY);
>>>>>>> parent of cfc2680... Migracja metod
					kolizja(przeciwnik);
				}
				
			}
			break;
		case 'y':
			std::cout << "akcja6";
			if (_polozenieY + ruch < wymiarY || _polozenieY + ruch > 0)
			{
				std::cout << "akcja7";
<<<<<<< HEAD
				if (this->czyKolizja(_polozenieX, _polozenieY + ruch) == nullptr)
=======
				if (Swiat->czyKolizja(_polozenieX, _polozenieY + ruch) == nullptr)
>>>>>>> parent of cfc2680... Migracja metod
				{
					std::cout << "akcja8";
					this->polozenieY += ruch;
					std::cout << "akcja9";
					czyRuszyl = true;
				}
				else
				{
<<<<<<< HEAD
					przeciwnik = this->czyKolizja(_polozenieX, _polozenieY + ruch);
=======
					przeciwnik = Swiat->czyKolizja(_polozenieX, _polozenieY + ruch);
>>>>>>> parent of cfc2680... Migracja metod
					kolizja(przeciwnik);
				}
				
			}
			break;
		}
		czasZycia++;
		proba++;
	}
}

bool Zwierze::kolizja(Organizm* przeciwnik)
{
	if (this->getSila() > przeciwnik->getSila())
	{
		//usuñ przeciwnika 
		// Jak usun¹æ przeciwnika?
		przeciwnik->gin();
	} else
	{
		this->gin();
	}
	return false;
}

Zwierze::Zwierze()
{

}

Zwierze::~Zwierze()
{

}
