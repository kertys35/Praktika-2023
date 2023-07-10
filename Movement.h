#pragma once
#include <stdlib.h>
#include "Cell(Blue).h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class Draw_Movement
{
public: 
	void First_Move(array<PictureBox^>^ Cell,int color)
	{
		Cell[0] = gcnew PictureBox();
		Cell[0]->Location = Point(rand()% 750+171, rand() % 511+20);
		switch (color)
		{
		case 1:
			Cell[0]->BackColor = Color::Blue;
			break;
		case 2:
			Cell[0]->BackColor = Color::Red;
			break;
		case 3:
			Cell[0]->BackColor = Color::Green;
			break;
		case 4:
			Cell[0]->BackColor = Color::Purple;
			break;
		default:
			break;
		}
		
		Cell[0]->Width = 10;
		Cell[0]->Height = 10;
		
	}
	void Create_New_Cell(array<PictureBox^>^ Cell, int color, int Cell_num, int Mother_Cell)
	{
		int direction,directionX,directionY, step = 10;
				Cell[Cell_num] = gcnew PictureBox();
				direction = rand() % 8 + 1;
				switch (direction)
				{
				case 1:
					directionX = 1;
					directionY=1;
					break;
				case 2:
					directionX = 1;
					directionY = -1;
					break;
				case 3:
					directionX = 1;
					directionY = 0;
					break;
				case 4:
					directionX = -1;
					directionY = 1;
					break;
				case 5:
					directionX = -1;
					directionY = -1;
					break;
				case 6:
					directionX = -1;
					directionY = 0;
					break;
				case 7:
					directionX = 0;
					directionY = 1;
					break;
				case 8:
					directionX = 1;
					directionY = -1;
					break;
				default:
					break;
				}
				Cell[Cell_num]->Location = Point(Cell[Mother_Cell]->Location.X + directionX * step, Cell[Mother_Cell]->Location.Y + directionY * step);

				if (Cell[Cell_num]->Location.X > 961)
					Cell[Cell_num]->Location = Point(Cell[Cell_num]->Location.X - 10, Cell[Cell_num]->Location.Y);
				if (Cell[Cell_num]->Location.X < 161)
					Cell[Cell_num]->Location = Point(Cell[Cell_num]->Location.X + 10, Cell[Cell_num]->Location.Y);
				if (Cell[Cell_num]->Location.Y > 531)
					Cell[Cell_num]->Location = Point(Cell[Cell_num]->Location.X, Cell[Cell_num]->Location.Y - 10);
				if (Cell[Cell_num]->Location.Y < 11)
					Cell[Cell_num]->Location = Point(Cell[Cell_num]->Location.X, Cell[Cell_num]->Location.Y + 10);
					switch (color)
					{
					case 1:
						Cell[Cell_num]->BackColor = Color::Blue;
						break;
					case 2:
						Cell[Cell_num]->BackColor = Color::Red;
						break;
					case 3:
						Cell[Cell_num]->BackColor = Color::Green;
						break;
					case 4:
						Cell[Cell_num]->BackColor = Color::Purple;
						break;
					default:
						break;
					}
					Cell[Cell_num]->Width = step;
					Cell[Cell_num]->Height = step;
	}
	void Normal_Move(PictureBox^ Cell, array<PictureBox^>^ Food,int food_num)
	{
		int direction, directionX, directionY,foodX,foodY, step = 10,check;
		direction = rand() % 8 + 1;
			check = 1;
			int i = 0;
			do
			{
				if (abs(Cell->Location.X - Food[i]->Location.X) < 50 && abs(Cell->Location.Y - Food[i]->Location.Y) < 50 )
				{
					if (Cell->Location.X > Food[i]->Location.X)
						directionX = -1;
					else
						directionX = 1;
					if(Cell->Location.Y > Food[i]->Location.Y)
						directionY = -1;
					else
						directionY = 1;
					check = 0;
				}
				i++;
			} while (i < food_num && check);
			if (check)
			{
				switch (direction)
				{
				case 1:
					directionX = 1;
					directionY = 1;
					break;
				case 2:
					directionX = 1;
					directionY = -1;
					break;
				case 3:
					directionX = 1;
					directionY = 0;
					break;
				case 4:
					directionX = -1;
					directionY = 1;
					break;
				case 5:
					directionX = -1;
					directionY = -1;
					break;
				case 6:
					directionX = -1;
					directionY = 0;
					break;
				case 7:
					directionX = 0;
					directionY = 1;
					break;
				case 8:
					directionX = 1;
					directionY = -1;
					break;
				default:
					break;
				}
			}
				Cell->Location = Point(Cell->Location.X + directionX * step, Cell->Location.Y + directionY * step);
				if (Cell->Location.X > 961)
					Cell->Location = Point(Cell->Location.X - 10, Cell->Location.Y);
				if (Cell->Location.X < 161)
					Cell->Location = Point(Cell->Location.X + 10, Cell->Location.Y);
				if (Cell->Location.Y > 531)
					Cell->Location = Point(Cell->Location.X, Cell->Location.Y - 10);
				if (Cell->Location.Y < 11)
					Cell->Location = Point(Cell->Location.X, Cell->Location.Y + 10);
			
		
	}
};


