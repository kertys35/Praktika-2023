#pragma once
#include <stdlib.h>
#include "Cells.h"
class Cell_Blue:public Cell
{
public:
	Cell_Blue(int Food,int x,int y)
	   {
		   this->Energy = Food;
		   this->activnost = 1;
		   this->x = x;
		   this->y = y;
	  }
	Cell_Blue()
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

	int compare_energy(Cell_Blue c)
	{
		if (c.Energy > 1)
			return 1;
		else
			return 0;
	}


};

