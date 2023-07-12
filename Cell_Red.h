#pragma once
using namespace System::Windows::Forms;
#include "Cells.h"
class Cell_red: public Cell
{
public:

	Cell_red(int Food,  int x, int y)
	{
		this->Energy = Food;
		this->activnost = 1;
		this->x = x;
		this->y = y;
	}
	Cell_red()
	{
		this->Energy = 15;
		x = 200;
		y = 200;
	}
	void set_cell(int x, int y, int energy)
	{
		this->x = x;
		this->y = y;
		this->Energy = energy;
		this->activnost = 1;
	}
	void set_energy(int energy)
	{
		this->Energy = energy;
	}

};

