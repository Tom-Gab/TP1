#include "Niveau.h"
#include "Point2D.h"

#include <string>
#include <iostream>

Niveau::Niveau(int* carte, std::string nomCreature, Point2D positionDepart) : m_carte { carte }, m_creature{ nomCreature }
{
	m_creature = new Creature{ nomCreature, positionDepart };
}

Niveau::~Niveau()
{
	delete m_creature;
}


int Niveau::getIndexCarte(Point2D position) { 
	
}

int* Niveau::getCarte() { return m_carte; }

std::string Niveau::getNomCreature() { nomCreature; }

void Niveau::getDeplacementPossible(bool* tabDeplacements) {
	if (Point2D x >= 0)
	{
		tabDeplacementsPossibles[0] = true;
	}

	if (Point2D y >= 0)
	{
		tabDeplacementsPossibles[3] = true;
	}

	if (Point2D y >= 0 && x>= 0)
	{
		tabDeplacementsPossibles[1] = true;
	}

	if (Point2D y >= 1)
	{
		tabDeplacementsPossibles[2] = true;
	}

}

void Niveau::deplacerCreature(constantes::Direction direction) {
	if (tabDeplacementsPossibles[0])
	{
		m_carte = direction;
	}

	if (tabDeplacementsPossibles[1])
	{
		m_carte = direction;
	}

	if (tabDeplacementsPossibles[2])
	{
		m_carte = direction;
	}

	if (tabDeplacementsPossibles[3])
	{
		m_carte = direction;
	}
}