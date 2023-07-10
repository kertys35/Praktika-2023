#pragma once
using namespace System::Windows::Forms;
#include "Cell(Blue).h"
#include "Cell_Red.h"
#include "Cell_Green.h"
#include "Cell_Purple.h"
class Game_Logic 
{
public:

	int eat_cell(array<PictureBox^>^ blue, PictureBox^ red, array<PictureBox^>^ green, array<PictureBox^>^ purple,int BlueNum, int GreenNum, int PurpleNum,int *prey)
	{
		int check=1,k;

			for (k = 0; k < BlueNum; k++)
			{
				if (abs(red->Location.X - blue[k]->Location.X)<20 && abs(red->Location.Y - blue[k]->Location.Y) < 20)
				{
					*prey = k;
					return 1;
				}
			}
			for (k = 0; k < PurpleNum; k++)
			{
				if (abs(red->Location.X - purple[k]->Location.X) < 20 && abs(red->Location.Y - purple[k]->Location.Y) < 20)
				{
					*prey = k;
					return 2;
				}
			}
			for (k = 0; k < GreenNum; k++)
			{
				if (abs(red->Location.X - green[k]->Location.X) < 20 && abs(red->Location.Y - green[k]->Location.Y)<20)
				{
					*prey = k;
					return 3;
				}
			}
		return 0;
	}
	int eat_move(array<PictureBox^>^ blue, PictureBox^ red, array<PictureBox^>^ green, array<PictureBox^>^ purple, int BlueNum, int GreenNum, int PurpleNum)
	{

	}
};

