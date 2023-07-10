#pragma once
#include <stdlib.h>
#include "Cells.h"
#include "Food.h"
class Cell_purple : public Cell
{
public:
	int Heat;
	int Agression;
	int Size;
	int Spread;
	Cell_purple(int Food, int Heat, int Agression, int Size, int Spread, int x, int y)
	{
		this->Energy = Food;
		this->Heat = Heat;
		this->Agression = Agression;
		this->Size = Size;
		this->Spread = Spread;
		this->x = x;
		this->y = y;
	}
	Cell_purple()
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
	void eat(Food_Class* foods, int FoodNum, Cell_purple PURPLE_CELLS)
	{
		for (int i = 0; i < FoodNum; i++)
		{
			if (abs(PURPLE_CELLS.x - foods[i].x) < 10 && abs(PURPLE_CELLS.y - foods[i].y) < 10)
			{
				PURPLE_CELLS.Energy = foods[i].energy;
				foods[i].freshness = 0;
			}
		}
	}
};

