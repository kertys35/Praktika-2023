#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
class Food_Class
{
public:
	int energy;
	int freshness;
	int x, y;
	Food_Class()
	{
		x = 0;
		y = 0;
		energy = 0;
		freshness = 0;
	}
	void set_Food(int energy, int freshness, int x, int y)
	{
		this->energy = energy;
		this->x = x;
		this->y = y;
		this->freshness = freshness;
	}
	void place_food_first(array<PictureBox^>^ Food,int x,int y,int num)
	{
		Food[num] = gcnew PictureBox();
		Food[num]->Location = Point(x, y);
		Food[num]->BackColor = Color::Black;
		Food[num]->Width = 10;
		Food[num]->Height = 10;
	}
	void place_food(array<PictureBox^>^ Food, int x, int y, int i)
	{
		Food[i]->Location = Point(x, y);
	}
};
