#pragma once
class Cell
{
public:
	int Energy;
	int x, y;
	int activnost;
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

