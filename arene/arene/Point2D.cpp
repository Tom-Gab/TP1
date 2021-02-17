#include "Point2D.h"

Point2D::Point2D(){}

Point2D::Point2D(int x, int y) : m_x{ x }, m_y{ y }{}

int Point2D::getX() { return m_x; }

int Point2D::getY() { return m_y; }

void Point2D::setPoint(int x, int y) {
	if (tabDeplacementsPossibles[0])
	{
		m_x - 1;
	}

	if (tabDeplacementsPossibles[1])
	{
		m_x + 1;
	}

	if (tabDeplacementsPossibles[2])
	{
		m_y - 1;
	}

	if (tabDeplacementsPossibles[3])
	{
		m_y + 1;
	}
}