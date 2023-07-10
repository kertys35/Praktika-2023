#pragma once
using namespace System::Windows::Forms;
#include "Cells.h"
class Cell_red: public Cell
{
public:
	int Heat;
	int Agression;
	int Size;
	int Spread;
	Cell_red(int Food, int Heat, int Agression, int Size, int Spread, int x, int y)
	{
		this->Energy = Food;
		this->Heat = Heat;
		this->Agression = Agression;
		this->Size = Size;
		this->Spread = Spread;
		this->x = x;
		this->y = y;
	}
	Cell_red()
	{
		this->Energy = 15;
		this->Heat = 1;
		this->Agression = 1;
		this->Size = 1;
		this->Spread = 1;
		x = 200;
		y = 200;
	}
	void set_cell(int x, int y, int energy)
	{
		this->x = x;
		this->y = y;
		this->Energy = energy;
	}
	void set_energy(int energy)
	{
		this->Energy = energy;
	}

};

