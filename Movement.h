#pragma once
#include <stdlib.h>
#include  "Cell(Blue).h"
#include "Cell_Red.h"
#include "Cell_Green.h"
#include "Cell_Purple.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class Draw_Movement
{
public: 
	void First_Move(array<PictureBox^>^ Cell,int color)	//создание первых клеток со случайным расположением
	{
		int x, y;
		x = rand() % 780 + 171;
		int TempX = x % 10;
		y = rand() % 511 + 20;
		int TempY = y % 10;
		x -= TempX;
		y -= TempY;
		Cell[0] = gcnew PictureBox();
		Cell[0]->Location = Point(x, y);
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

	void Create_New_Cell(array<PictureBox^>^ Cell, int color, int Cell_num, int Mother_Cell)	//создание новой клетки без учета еды
	{
		int direction, directionX, directionY, step = 10;
		Cell[Cell_num] = gcnew PictureBox();
		direction = rand() % 8 + 1;
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
	void Normal_Move_food(PictureBox^ Cell, array<PictureBox^>^ Food,int food_num)	//передвижение с учетом еды
	{
		int direction, directionX, directionY,foodX=10000,foodY=10000, step = 10,check;
		direction = rand() % 8 + 1;
			check = 1;
			int i = 0;
			for (i = 0; i < food_num; i++)
			{
				if (abs(Cell->Location.X - Food[i]->Location.X) < 300 && abs(Cell->Location.Y - Food[i]->Location.Y) < 300)
				{
					if (abs(Cell->Location.X - Food[i]->Location.X)< abs(Cell->Location.X - foodX) && abs(Cell->Location.Y - Food[i]->Location.Y) < abs(Cell->Location.Y - foodY))
					{
						foodX = Food[i]->Location.X;
						foodY = Food[i]->Location.Y;
					}
					check = 0;
				}

			}
			if (Cell->Location.X > foodX)
				directionX = -1;
			else
				if (Cell->Location.X < foodX)
					directionX = 1;
				else
					directionX = 0;

			if (Cell->Location.Y > foodY)
				directionY = -1;
			else
				if (Cell->Location.Y < foodY)
					directionY = 1;
				else
					directionY = 0;

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

	void Normal_Move(PictureBox^ Cell)	//передвижение без учета еды
	{
		int direction, directionX, directionY, step = 10;
		direction = rand() % 8 + 1;
		int i = 0;

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

	void Normal_Move_Predator(PictureBox^ Cell, Cell_Blue* blue, Cell_green* green, Cell_purple* purple, int BlueNum, int GreenNum, int PurpleNum, int activB, int activG, int activP)	//передвижение для хищника
	{
		int direction, directionX, directionY, foodX = 10000, foodY = 10000, step = 10, check;
		direction = rand() % 8 + 1;
		check = 1;
		int i = 0;
		if (activB)
		{
			for (i = 0; i < BlueNum; i++)
			{
				if (abs(Cell->Location.X - blue[i].x) < 500 && abs(Cell->Location.Y - blue[i].y) < 500)
				{
					if (abs(Cell->Location.X - blue[i].x) < abs(Cell->Location.X - foodX) && abs(Cell->Location.Y - blue[i].y) < abs(Cell->Location.Y - foodY) && blue[i].Energy>1)
					{
						foodX = blue[i].x;
						foodY = blue[i].y;
					}
					check = 0;
				}

			}
		}

		if (activG)
		{
			for (i = 0; i < GreenNum; i++)
			{
				if (abs(Cell->Location.X - green[i].x) < 500 && abs(Cell->Location.Y - green[i].y) < 500)
				{
					if (abs(Cell->Location.X - green[i].x) < abs(Cell->Location.X - foodX) && abs(Cell->Location.Y - green[i].y) < abs(Cell->Location.Y - foodY) && green[i].Energy > 1)
					{
						foodX = green[i].x;
						foodY = green[i].y;
					}
					check = 0;
				}

			}
		}
		if (activP)
		{
			for (i = 0; i < PurpleNum; i++)
			{
				if (abs(Cell->Location.X - purple[i].x) < 500 && abs(Cell->Location.Y - purple[i].y) < 500)
				{
					if (abs(Cell->Location.X - purple[i].x) < abs(Cell->Location.X - foodX) && abs(Cell->Location.Y - purple[i].y) < abs(Cell->Location.Y - foodY) && purple[i].Energy > 1)
					{
						foodX = purple[i].x;
						foodY = purple[i].y;
					}
					check = 0;
				}
			}
		}
		if (Cell->Location.X > foodX)
			directionX = -1;
		if (Cell->Location.X < foodX)
			directionX= 1;
		if (Cell->Location.X == foodX)
			directionX = 0;

		if (Cell->Location.Y > foodY)
			directionY = -1;
		if (Cell->Location.Y < foodY)
				directionY = 1;
		if(Cell->Location.Y == foodY)
				directionY = 0;

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


