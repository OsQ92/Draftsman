#pragma once
#include "stdafx.h"
#include "Figure.h"
#include "XY.h"
class CCircle :
	public CFigure
{
protected:
	CXY m_center;
	float m_radius;
public:
	
	CCircle(CXY m, float radius);
	CCircle(float x, float y, float radius);
	CCircle(float x, float y, float radius, int r, int g, int b, int thickness);
	~CCircle();
	float getRad();
	CXY getCenter();
	void updateRadius(float x, float y);
	void output(CDC* pDC);
	friend std::ostream& operator<<(std::ostream&, CCircle&);
};

extern std::ostream& operator<<(std::ostream&, CCircle&);
