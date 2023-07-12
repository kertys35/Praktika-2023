#pragma once
using namespace System::Windows::Forms;
#include <stdlib.h>
#include  "Cell(Blue).h"
#include "Cell_Red.h"
#include "Cell_Green.h"
#include "Cell_Purple.h"
#include "Food.h"
class Game_Logic 
{
public:

	int eat_cell(Cell_Blue* blue, PictureBox^ red, Cell_green* green, Cell_purple* purple,int BlueNum, int GreenNum, int PurpleNum,int *prey, int activB, int activG, int activP)
	{
		int check=1,k;

		if(activB)
			for (k = 0; k < BlueNum; k++)
			{
				if (abs(red->Location.X - blue[k].x)<=10 && abs(red->Location.Y - blue[k].y) <= 10 && blue[k].Energy>1)
				{
					*prey = k;
					return 1;
				}
			}
		if (activP)
			for (k = 0; k < PurpleNum; k++)
			{
				if (abs(red->Location.X - purple[k].x) < 10 && abs(red->Location.Y - purple[k].y) < 10)
				{
					*prey = k;
					return 2;
				}
			}
		if (activG)
			for (k = 0; k < GreenNum; k++)
			{
				if (abs(red->Location.X - green[k].x) < 10 && abs(red->Location.Y - green[k].y)<10)
				{
					*prey = k;
					return 3;
				}
			}
		return 0;
	}

	int eat(int FoodNum,Cell_Blue BLUE_CELLS,Food_Class* foods)
	{
		for (int i = 0; i < FoodNum; i++)
		{
			if (abs(BLUE_CELLS.x - foods[i].x) < 20 && abs(BLUE_CELLS.y - foods[i].y) < 20)
			{
				return i;
			}
		}
		return -1;
	}

	int eat(int FoodNum,Cell_purple purple,Food_Class* foods)
	{
		for (int i = 0; i < FoodNum; i++)
		{
			if (abs(purple.x - foods[i].x) < 20 && abs(purple.y - foods[i].y) < 20)
			{
				return i;
			}
		}
		return -1;
	}
};

