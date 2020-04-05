#include "Circle.h"


CCircle::CCircle(CXY m, float radius)
{
	m_radius = radius;
	m_center = m;
}

CCircle::CCircle(float x, float y, float radius) 
{
	m_center.setX(x);
	m_center.setY(y);
	m_radius = radius;
}

CCircle::CCircle(float x, float y, float radius, int r, int g, int b, int thickness) {
	m_center.setX(x);
	m_center.setY(y);
	m_radius = radius;
	m_color->setColor(r, g, b);
	m_thickness = thickness;
}


CCircle::~CCircle()
{
}
void CCircle::updateRadius(float x, float y) {
	m_radius = sqrt((x*x) + (y*y));
}

float CCircle::getRad() {
	return m_radius;
}

CXY CCircle::getCenter() {
	return m_center;
}


std::ostream& operator<<(std::ostream& out, CCircle& c) 
{
	return (out << c.m_center.getX() << " " << c.m_center.getY() << " " << c.m_radius);
}



void CCircle::output(CDC* pDC)
{
	CPen pen(PS_SOLID, m_thickness, RGB(m_color->R, m_color->G, m_color->B));
	pDC->SelectObject(pen);
	int x1 = m_center.getX() - m_radius;
	int x2 = m_center.getX() + m_radius;
	int y1 = m_center.getY() + m_radius;
	int y2 = m_center.getY() - m_radius;
	pDC->SelectObject(pen);
	pDC->Ellipse(x1,y1,x2,y2);
	
}

