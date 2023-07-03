#pragma once
#include <stdlib.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

ref class Draw_Movement
{
public: 
	void First_Move(array<PictureBox^>^ Cell,int color)
	{
		Random^ a = gcnew Random();
		Random^ b = gcnew Random();
		
		Cell[0] = gcnew PictureBox();
		Cell[0]->Location = Point(200 + color*100, color * 100);
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
	int Normal_Move(array<PictureBox^>^ Cell, int color, int Cell_num)
	{
		int direction=10,cell_check,new_cell_num=Cell_num;
			

				do 
				{
					Cell[new_cell_num] = gcnew PictureBox();
					cell_check = 0;
					switch (rand() % 7 + 1)
					{
					case 1:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X + 10, Cell[Cell_num - 1]->Location.Y );

						break;
					case 2:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X + 10, Cell[Cell_num - 1]->Location.Y - 10);
						break;
					case 3:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X , Cell[Cell_num - 1]->Location.Y -10);
						break;
					case 4:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X - 10, Cell[Cell_num - 1]->Location.Y-10 );
						break;
					case 5:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X -10, Cell[Cell_num - 1]->Location.Y );
						break;
					case 6:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X -10, Cell[Cell_num - 1]->Location.Y + 10);
						break;
					case 7:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X + 10, Cell[Cell_num - 1]->Location.Y + 10);
						break;
					case 8:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X, Cell[Cell_num - 1]->Location.Y + 10);
						break;
					default:
						Cell[new_cell_num]->Location = Point(Cell[Cell_num - 1]->Location.X, Cell[Cell_num - 1]->Location.Y + 10);
						break;
					}

					if(Cell[new_cell_num]->Location.X < 161 || Cell[new_cell_num]->Location.X > 961 || Cell[new_cell_num]->Location.Y < 1 || Cell[new_cell_num]->Location.Y > 541)
						cell_check = 1;
				} while (cell_check);

					switch (color)
					{
					case 1:
						Cell[new_cell_num]->BackColor = Color::Blue;
						break;
					case 2:
						Cell[new_cell_num]->BackColor = Color::Red;
						break;
					case 3:
						Cell[new_cell_num]->BackColor = Color::Green;
						break;
					case 4:
						Cell[new_cell_num]->BackColor = Color::Purple;
						break;
					default:
						break;
					}
					Cell[new_cell_num]->Width = 10;
					Cell[new_cell_num]->Height = 10;
					
				
				new_cell_num += 1;
				return new_cell_num;
	}

};


