#pragma once
#include "stdafx.h"
class CColor
{
public:
	int R;
	int G;
	int B;
	CColor();
	CColor(int red, int green, int blue);
	~CColor();
	void setColor(int red, int green, int blue);

};

