#pragma once

class Cell_Blue
{
public:
	int Food;
	int Heat;
	int Agression;
	int Size;
	int Spread;	
	int x, y;
	Cell_Blue(int Food, int Heat, int Agression, int Size, int Spread,int x,int y)
	   {
		   this->Food = Food;
		   this->Heat = Heat;
		   this->Agression = Agression;
		   this->Size = Size;
		   this->Spread = Spread;
		   this->x = x;
		   this->y = y;
	  }
	Cell_Blue()
	{
		this->Food = 1;
		this->Heat = 1;
		this->Agression = 1;
		this->Size = 1;
		this->Spread = 1;
		x = 200;
		y = 200;
	}

};

