
#include "Color.h"


CColor::CColor()
{
	R = 0;
	G = 0;
	B = 0;
}

CColor::CColor(int red, int green, int blue)
{
	R = red;
	G = green;
	B = blue;
}

CColor::~CColor()
{
}

void CColor::setColor(int red, int green, int blue) 
{
	R = red;
	G = green;
	B = blue;
}
